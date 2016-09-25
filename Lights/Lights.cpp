#include "Lights.h"

Lights::Lights(I2C kArduino){
	this->lights = kArduino;
}


void Lights::setColor(int mode){
	this->toSend[0]=(char)mode;
	
	if(this->lights.addressOnly())
		this->lights.transaction(toSend, 1, null, 0);
	else
		std::cout<<"Arduino not found!";
}
