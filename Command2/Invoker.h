#ifndef _INVOKER_H_
#define _INVOKER_H_
#include <list>
#include <vector>
using namespace std;

class Command;

//请求发送者
class RemoteControl {
public:
	RemoteControl();
	~RemoteControl();
	void setCommand(int slot, Command *pOnCmd, Command *pOffCmd);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);

private:
	// list<Command*>* pOnCmd;
	vector<Command*> pOnCmd;
	vector<Command*> pOffCmd;
};

#endif