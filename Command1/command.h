#include "chef.h"

class Command {
public:
	Command(Chef* chef);
	virtual ~Command();
	virtual void ExcuteCmd();

protected:
	Chef* m_Chef;
};
