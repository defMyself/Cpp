#include"Receiver.h"
#include<iostream>
using namespace std;
Light::Light()
{
	
}
Light::~Light()
{

}
void Light::on()
{
	cout<<"light is on...."<<endl;

}
void Light::off()
{
	cout<<"light is off..."<<endl;
}
void Light::flash()
{
	cout <<"light is flashing..." << endl;
}

Stereo::Stereo()
{

}
Stereo::~Stereo()
{

}

void Stereo::on()
{
	cout<<"stereo is on ..."<<endl;
}

void Stereo::setCD()
{
	cout<<"stereo is set for CD input"<<endl;
}
void Stereo::setVolume(int volume)
{
	cout<<"stereo volume set to "<<volume<<endl;
}
void Stereo::off()
{
	cout<<"stereo is off..."<<endl;
}