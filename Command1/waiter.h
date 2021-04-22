#include <list>
#include "command.h"

class Waiter {
public:
	Waiter();
	void AddCmd(Command* cmd);
	void DelCmd(Command* cmd);
	void Notify();

private:
	std::list<Command*> m_CmdList;
};