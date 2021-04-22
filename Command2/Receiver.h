#ifndef _RECEIVER_H_
#define _RECEIVER_H_
// Receiver.h
// 命令接收者
class Light {
public:
	Light();
	~Light();
	void on();
	void off();
	void flash();
};

class Stereo {
public:
	Stereo();
	~Stereo();
	void on();
	void setCD();
	void setVolume(int volume);
	void off();
};

#endif