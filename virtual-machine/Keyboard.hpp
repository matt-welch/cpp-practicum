/*
 * Keyboard.hpp
 *
 *  Created on: Mar 15, 2012
 *      Author: mwelch
 */

#ifndef KEYBOARD_HPP_
#define KEYBOARD_HPP_

#include <istream>
using std::istream;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Device.hpp"
#include "Subject.hpp"
#include <vector>
using std::vector;
#include <algorithm>
using std::find;

class Observer;
class Keyboard : public Device, public Subject {
public:
	Keyboard(istream & inPut);
	virtual ~Keyboard();
	virtual void PutChar(char c);
	virtual char GetChar();

	virtual void RegisterObserver(
			Observer * someObserver, Event * someEvent);
	virtual void UnRegisterObserver(
			Observer * someObserver, Event * someEvent);
	virtual void EmitEvent(Event * someEvent);
	virtual void Notify( ) const;

private:
	istream& _kbInput;
	vector<Observer *> _observers;
	Event _kbEvent;
};

#endif /* KEYBOARD_HPP_ */
