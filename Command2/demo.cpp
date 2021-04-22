#include <iostream>
#include <string>
using namespace std;

class Person;

class Command {
	Person *object;
	void (Persion:: *method)();
public:
	Command(Persion *obj = 0, void(Persion::*meth)() = 0) {
		object = obj;
		method = meth;
	}

	void execute() {
		(object->*method)();
	}
};

class Person {
	string name;
	Command cmd;
public:
	Perso(string n, Command c) : cm(c) {
		name = n;
	}

	void talk() {
		cout << name << " is talking" << endl;
		cmd.execute();
	}

	void passOn() {
		cout << name << " is passing on" << endl;
		cmd.execute();
	}

	void gossip() {
		cout << name << " is gossiping" << endl;
		cmd.execute();
	}

	void listen() {
		cout << name << " is listening" << endl;
	}
};

int main() {
	Persion wilma("Wilma", Command());

	Persion betty("Betty", Command(&wilma, &Person::listen));
	
}
