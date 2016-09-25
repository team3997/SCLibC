#ifndef F310_H
#define F310_H

#include <Hardware.h>
#include "WPILib.h"

public class Lights {

	static const int INDIGO = 1;
	static const int ORANGE = 2;
	static const int HALFYELLOW = 3;
	static const int FULLYELLOW = 4;
	static const int RAINBOW = 5;
	static const int PRIDE = 6;
	static const int BULLET = 7;
	char toSend [1];
	I2C lights;
	Lights(I2C kArduino);

	void setColor();
}

#endif
