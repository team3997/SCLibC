#ifndef AMT103V_ENCODER_H
#define AMT103V_ENCODER_H

#include "Params.h"
#include <CounterBase.h>
#include <Encoder.h>

class AMT103V_Encoder {
	private:
		Encoder encoder;
	
	public:
		EncodingType encodingType = Params.ENCODER_ENCODING_TYPE;
		const double distancePerPulse = Params.ENCODER_DISTANCE_PER_PULSE;

		AMT103V_Encoder(int aChannel, int bChannel);
	
		AMT103V_Encoder(int aChannel, int bChannel, bool reverseDirection);	
	
		/**
		 * Gets the current count. Returns the current count on the Encoder. This
		 * method compensates for the decoding type.
		 *
		 * @return Current count from the Encoder adjusted for the 1x, 2x, or 4x scale
		 *         factor.
		 */
		double getScaledCount();
		
		
		/**
		 * Get the current rate of the encoder. Units are distance per second as
		 * scaled by the value from setDistancePerPulse().
		 *
		 * @return The current rate of the encoder.
		 */
		double getRate();
		
		
		/**
		 * Gets the raw value from the encoder. The raw value is the actual count
		 * unscaled by the 1x, 2x, or 4x scale factor.
		 *
		 * @return Current raw count from the encoder
		*/
		double getRaw();
		
		
		/**
		 * Reset the Encoder distance to zero. Resets the current count to zero on the
		 * encoder.
		 */
		void reset();

		
		/**
		 * Get the WPI encoder object
		 * 
		 * @return The WPILIB Encoder ojbect
		 */
		Encoder getEncoderObject();
}

#endif
