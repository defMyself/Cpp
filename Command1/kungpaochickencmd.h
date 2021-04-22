#include "command.h"
#include "chef.h"

class KungPaoChickenCmd : public Command {
public:
	KungPaoChickenCmd(Chef* chef);
	void ExcuteCmd() override;
};
