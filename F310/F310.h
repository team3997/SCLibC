#include "WPILib.h"
#ifndef F310_H
#define F310_H

 class F310 {

	public:
		static const int greenButton = 1;
		static const int blueButton = 3;
		static const int redButton = 2;
		static const int yellowButton = 4;
		static const int backButton = 7;
		static const int startButton = 8;
		static const int leftBumper = 5;
		static const int rightBumper = 6;
		static const int leftStickClick = 9;
		static const int rightStickClick = 10;
		static const int leftTrigger = 11;
		static const int rightTrigger = 12;
		F310(int portNum);

	private:
		Joystick joystick;
		const double triggerEnableThreshold = 0.78;

	 double getLeftX();
	 double getLeftY();
	 double getLeftTriggerAxis();
	 double getRightTriggerAxis();
	 bool getLeftTrigger();
	 bool getRightTrigger();
	 double getRightX();
	 double getRightY();
	 bool getButton();
	 bool getGreenButton();
	 bool getBlueButton();
	 bool getRedButton();
	 bool getYellowButton();
	 bool getBackButton();
	 bool getStartButton();
	 bool getLeftBumper();
	 bool getRightBumper();
	 bool getLeftStickClick();
	 bool getRightStickClick();
	 bool getTrigger();
	 int getPOVVal();
	 bool getPOVDown();
	 bool getPOVRight();
	 bool getPOVUp();
	 bool getPOVLeft();
}

#endif
