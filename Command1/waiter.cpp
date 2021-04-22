#include "waiter.h"

Waiter::Waiter() {

}

void Waiter::AddCmd(Command *cmd) {
	m_CmdList.push_back(cmd);
}

void Waiter::DelCmd(Command *cmd) {
	m_CmdList.remove(cmd);
}

void Waiter::Notify() {
	for(auto cmd : m_CmdList) {
		if(cmd) {
			cmd->ExcuteCmd();
		}
	}
}