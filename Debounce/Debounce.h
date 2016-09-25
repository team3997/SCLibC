#ifndef AMT103V_ENCODER_H
#define AMT103V_ENCODER_H

#include "F310.h"

/*********************************Debounce**********************************
 * The Debounce class allows for the creation of joystick button debounce  *
 * objects. These objects automatically keep track in changes of button    *
 * state, so you can read falling and rising edges. This can help keep you *
 * from processing button pushes more than once for an individual task.    *
 ***************************************************************************/

class Debounce {
	private:
		F310 joystick;		//Joystick object
		int button;		//Button number on the joystick
		bool lastState;		//Records the button's previous state
	public:
		Debounce(F310 joystick, int button);
		/*
		*Constructor for the Debounce class.  Saves the joystick and button
	  	*information and records an initial state in lastState;
		*/
	
	bool getRise();
	/*
	* Returns whether the button is seeing a rising edge.
	* Returns: true: The button went from low to high; false: did not go from low to high
	*/

	bool getFall();
	/*
	* Returns whether the button is seeing a falling edge.
	* Returns: true: The button went from high to low; false: did not go from high to low
	*/
	
	bool getChange();
	/*
	* Returns whether the button state has changed
	* Returns: true: The button saw a rising or falling edge; false: Did not
	*/

	bool getValue();
	/*
	* Updates the lasteState variable and returns button's current value
	* Returns: The button's curent value
	*/
	
	void update();
	/*
	* Updates the lastState variable in cases where you don't care about
	* the button's state this loop but need the object to be kept current.
	*/
}

#endif
