#include "Debounce.h"
Debounce::Debounce(F310 joystick, int button) {
	this->joystick = joystick; 
	this->button = button;
	
	lastState = joystick.getButton(button);
}
	
bool Debounce::getRise() {
	if(joystick.getButton(button) && !lastState) {
		lastState = true;
		return true;
	}
	
	lastState = joystick.getButton(button);
	return false;
}

bool Debounce::getFall() {
	if(!joystick.getButton(button) && lastState) {
		lastState = false;
		return true;
	}
	
	lastState = joystick.getButton(button);
	return false;
}

bool Debounce::getChange() {
	return(this.getRise() || this.getFall());
}


bool Debounce::getValue() {
	lastState = joystick.getButton(button);
	
	return joystick.getButton(button);
}

void Debounce::update() {
	lastState = joystick.getButton(button);
}

