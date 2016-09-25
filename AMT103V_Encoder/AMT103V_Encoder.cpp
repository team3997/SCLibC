#include "Params.h"
#include <CounterBase.h>
#include <Encoder.h>

AMT103V_Encoder::AMT103V_Encoder(int aChannel, int bChannel){
	this->encoder = new Encoder(aChannel, bChannel, false, encodingType);
	this->encoder.setDistancePerPulse((double)distancePerPulse);
}

AMT103V_Encoder::AMT103V_Encoder(int aChannel, int bChannel, bool reverseDirection){
	this->encoder = new Encoder(aChannel, bChannel, reverseDirection, encodingType);
	this->encoder.setDistancePerPulse((double)distancePerPulse);
}


/**
 * Gets the current count. Returns the current count on the Encoder. This
 * method compensates for the decoding type.
 *
 * @return Current count from the Encoder adjusted for the 1x, 2x, or 4x scale
 *         factor.
 */
double AMT103V_Encoder::getScaledCount(){
	return this->encoder.get();
}


/**
 * Get the current rate of the this->encoder. Units are distance per second as
 * scaled by the value from setDistancePerPulse().
 *
 * @return The current rate of the this->encoder.
 */
double AMT103V_Encoder::getRate(){
	return this->encoder.getRate();
}


/**
 * Gets the raw value from the this->encoder. The raw value is the actual count
 * unscaled by the 1x, 2x, or 4x scale factor.
 *
 * @return Current raw count from the this->encoder
*/
double AMT103V_Encoder::getRaw(){
	return this->encoder.getRaw();
}


/**
 * Reset the Encoder distance to zero. Resets the current count to zero on the
 * this->encoder.
 */
void AMT103V_Encoder::reset(){
	this->encoder.reset();
}


/**
 * Get the WPI this->encoder object
 * 
 * @return The WPILIB Encoder ojbect
 */
Encoder AMT103V_Encoder::getEncoderObject(){
	return this->encoder;
}
