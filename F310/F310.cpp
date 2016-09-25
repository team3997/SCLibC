#include <F310.h>
F310::F310(int portNum) {
	this.joystick = new Joystick(portNum);
}

double F310::getLeftX() {
	return this.joystick.getRawAxis(0);
}

double F310::getLeftY() {
	return -this.joystick.getRawAxis(1);
}

double F310::getLeftTriggerAxis() {
	return this.joystick.getRawAxis(2);
}

double F310::getRightTriggerAxis(){
	return this.joystick.getRawAxis(3);
}

bool F310::getLeftTrigger() {
	return this.joystick.getRawAxis(2) >= triggerEnableThreshold;
}

bool F310::getRightTrigger(){
	return this.joystick.getRawAxis(3) >= triggerEnableThreshold;
}

double F310::getRightX() {
	return this.joystick.getRawAxis(4);
}

double F310::getRightY() {
	return -this.joystick.getRawAxis(5);
}

bool F310::getButton(int btnNum) {
	if((btnNum == 11) || (btnNum == 12))
		return getTrigger(btnNum);
	return this.joystick.getRawButton(btnNum);
}

bool F310::getGreenButton() {
	return this.joystick.getRawButton(greenButton);
}

bool F310::getBlueButton() {
	return this.joystick.getRawButton(blueButton);
}

bool F310::getRedButton() {
	return this.joystick.getRawButton(redButton);
}

bool F310::getYellowButton() {
	return this.joystick.getRawButton(yellowButton);
}

bool F310::getBackButton() {
	return this.joystick.getRawButton(backButton);
}

bool F310::getStartButton() {
	return this.joystick.getRawButton(startButton);
}

bool F310::getLeftBumper() {
	return this.joystick.getRawButton(leftBumper);
}

bool F310::getRightBumper() {
	return this.joystick.getRawButton(rightBumper);
}

bool F310::getLeftStickClick() {
	return this.joystick.getRawButton(leftStickClick);
}

bool F310::getRightStickClick() {
	return this.joystick.getRawButton(rightStickClick);
}

bool F310::getTrigger(int num){
	if(num == 11)
		return getLeftTrigger();
	else
		return getRightTrigger();
}

int F310::getPOVVal(){
	return this.joystick.getPOV(0);
}

bool F310::getPOVDown(){
	return (this.joystick.getPOV(0) == 180);
}

bool F310::getPOVRight(){
	return (this.joystick.getPOV(0) == 90);
}

bool F310::getPOVUp(){
	return (this.joystick.getPOV(0) == 0);
}

bool F310::getPOVLeft(){
	return (this.joystick.getPOV(0) == 270);
}
