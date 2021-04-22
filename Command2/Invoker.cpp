#include "Invoker.h"
#include "Command.h"

RemoteControl::RemoteControl() {
	Command *pCmd = new NoCommand();
	for(int i=0; i<2; i++) {
		pOnCmd.push_back(pCmd);
		pOffCmd.push_back(pCmd);
	}
}

RemoteControl::~RemoteControl() {}

void RemoteControl::setCommand(int slot, Command *pOnCmd, Command *pOffCmd) {
	this->pOnCmd.at(slot)=pOnCmd;
	this->pOffCmd.at(slot)=pOffCmd;
}

void RemoteControl::onButtonWasPushed(int slot) {
	this->pOnCmd.at(slot)->Execute();
}

void RemoteControl::offButtonWasPushed(int slot) {
	this->pOffCmd.at(slot)->Execute();
}