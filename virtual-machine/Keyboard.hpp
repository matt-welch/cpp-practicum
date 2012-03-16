/*
 * Keyboard.hpp
 *
 *  Created on: Mar 15, 2012
 *      Author: mwelch
 */

#ifndef KEYBOARD_HPP_
#define KEYBOARD_HPP_

#include <istream>
#include "Device.hpp"
using namespace std;

class Keyboard : public Device {
public:
	Keyboard(istream & inPut):
		myInput(inPut)
	{

	}
	virtual ~Keyboard(){}
	virtual void PutChar(char c);
	virtual char GetChar();

private:
	istream& myInput;
};

#endif /* KEYBOARD_HPP_ */
