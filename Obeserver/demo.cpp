#include <iostream>
#include <vector>
#include <list>

using namespace std;

class ITeacherListenner;

class INotifier {
public:
	virtual void registerListenner(ITeacherListenner *l) = 0;
	virtual void removeListenner(ITeacherListenner *l) = 0;
	virtual void notify() = 0;
};

class MonitorNotifier : public INotifier {
public:
	void registerListenner(ITeacherListenner *l) {
		listenners.push_back(l);
	}


	void removeListenner(ITeacherListenner *l) {
		list<ITeacherListenner*>::iterator it;
		for(it = listenners.begin(); it!=listenners.end(); it++) {
			if(*it == l) {
				listenners.remove(l);
				break;
			}
		}
	}

	void notify() {
		/*
		list<ITeacherListenner*>::iterator it;
		for(it=listenners.begin(); it!=listenners.end();it++) {
			(*it)->onTeacherComming(mValue);
		}
		*/
		for(auto p : listenners)
			p->onTeacherComming(mValue);
	}

	void setValue(int value) {
		mValue = value;
		notify();
	}

private:
	list<ITeacherListenner*> listenners;
	int mValue;
};

class ITeacherListenner {
public:
	virtual void onTeacherComming(int value) = 0;
};

class ZhangSan : public ITeacherListenner {
public:
	void onTeacherComming(int value) {
		stopCopyWork(value);
	}

	void stopCopyWork(int value) {
		cout << "zhangsan stopCopywork + " << value << endl;
	}
};

class LiSi : public ITeacherListenner {
public:
	void onTeacherComming(int value) {
		stopPlayGame(value);
	}

	void stopPlayGame(int value) {
		cout << "lisi stop playgam + " << value << endl;
	}
};


int main() {
	cout << "Hello world" << endl;
	MonitorNotifier monitor;
	ZhangSan zs;
	LiSi ls;
	monitor.registerListenner(&zs);
	monitor.registerListenner(&ls);
	monitor.setValue(1);

	cout << "Hello world2" << endl;
	monitor.removeListenner(&ls);
	monitor.setValue(2);

	return 0;
}
