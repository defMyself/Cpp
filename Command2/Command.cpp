#include "Command.h"
#include "Receiver.h"

Command::Command()
{

}

Command::~Command()
{

}

NoCommand::NoCommand()
{

}

NoCommand::~NoCommand()
{

}

void NoCommand::Execute()
{
	//cout << "NoCommand do nothing" << endl;
}

LightOnCommand::LightOnCommand(Light *pRec)
{
	this->pRec=pRec;
}

LightOnCommand::~LightOnCommand()
{

}

void LightOnCommand::Execute()
{
  	pRec->on();
}

LightOffCommand::LightOffCommand(Light *pRec)
{
	this->pRec=pRec;
}

LightOffCommand::~LightOffCommand()
{

}
void LightOffCommand::Execute()
{
 	pRec->off();
}

LightFlashCommand::LightFlashCommand(Light *pRec)
{
	this->pRec=pRec;
}

LightFlashCommand::~LightFlashCommand()
{

}

void LightFlashCommand::Execute()
{
	pRec->flash();
}

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo *pRec)
{
	this->pRec=pRec;
}

StereoOnWithCDCommand::~StereoOnWithCDCommand()
{

}

void StereoOnWithCDCommand::Execute()
{
	pRec->on();
	pRec->setCD();
	pRec->setVolume(11);
}

StereoOffWithCDCommand::StereoOffWithCDCommand(Stereo *pRec)
{
	this->pRec=pRec;
}

StereoOffWithCDCommand::~StereoOffWithCDCommand()
{

}

void StereoOffWithCDCommand::Execute()
{
	this->pRec->off();
}