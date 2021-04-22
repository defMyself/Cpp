#ifndef _COMMAND_H_
#define _COMMAND_H_

class Light;
class Stereo;
// 命令接口

class Command {
public:
	virtual ~Command();
	virtual void Execute()=0;

protected:
	Command();
	
private:

};

// 空命令
class NoCommand : public Command {
public:
	NoCommand();
	~NoCommand();
	void Execute();

protected:

private:

};

// 具体的命令
class LightOnCommand : public Command {
public:
	LightOnCommand(Light* pRec);
	~LightOnCommand();
	void Execute();

private:
	Light* pRec; // 命令的接受者
};

class LightOffCommand : public Command {
public:
	LightOffCommand(Light* pRec);
	~LightOffCommand();
	void Execute();

private:
	Light* pRec;
};

// 灯新增命令
class LightFlashCommand : public Command {
public:
	LightFlashCommand(Light* pRec);
	~LightFlashCommand();
	void Execute();

private:
	Light* pRec;
};

class StereoOnWithCDCommand : public Command {
public:
	StereoOnWithCDCommand(Stereo* pRec);
	~StereoOnWithCDCommand();
	void Execute();
private:
	Stereo* pRec;
};


class StereoOffWithCDCommand : public Command {
public:
	StereoOffWithCDCommand(Stereo* pRec);
	~StereoOffWithCDCommand();
	void Execute();

private:
	Stereo* pRec;
};

#endif