#include "kungpaochickencmd.h"

KungPaoChickenCmd::KungPaoChickenCmd(Chef* chef)
	:Command(chef) 
{

}

void KungPaoChickenCmd::ExcuteCmd()
{
	m_Chef->KungPaoChicken();
}

