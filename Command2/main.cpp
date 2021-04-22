#include "Command.h"
#include "Receiver.h"
#include "Invoker.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	// 创建遥控器
	RemoteControl *remoteControl = new RemoteControl();

	// 创建接受者
	Light *roomLight = new Light();
	Stereo *stereo = new Stereo();

	// 创建命令
	LightOnCommand *roomLightOn = new LightOnCommand(roomLight);
	LightOffCommand *roomLightOff = new LightOffCommand(roomLight);
	LightFlashCommand *roomLightFlash = new LightFlashCommand(roomLight);

	StereoOnWithCDCommand *stereoOn = new StereoOnWithCDCommand(stereo);
	StereoOffWithCDCommand *stereoOff = new StereoOffWithCDCommand(stereo);

	// 装载命令
	remoteControl->setCommand(0, roomLightOn, roomLightFlash);
	remoteControl->setCommand(1, stereoOn, stereoOff);

	// 执行命令
	// 控制遥控器
	remoteControl->onButtonWasPushed(0);
	remoteControl->onButtonWasPushed(1);
	remoteControl->offButtonWasPushed(0);
	remoteControl->offButtonWasPushed(1);	

	delete remoteControl;
	
	return 0;
}