/*
 * Keyboard.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: mwelch
 */

#include "Keyboard.hpp"

Keyboard::Keyboard(istream & inPut):
				_kbInput(inPut)
{ _kbEvent.setInfo("KeyPress");}

Keyboard::~Keyboard(){

}

char Keyboard::GetChar(){
	char c;
	_kbInput >> c;
	return c;
}

void Keyboard::PutChar(char c)
{
	// does nothing
}

void Keyboard::EmitEvent(Event * someEvent)
{
	_kbEvent.setInfo(someEvent->getInfo());
	cout << "KeyboardEvent::[" << someEvent->getInfo() << "]" << endl;
	Notify();
}

void Keyboard::RegisterObserver(
		Observer * someObserver,
		Event * someEvent)
{
    _observers.push_back(someObserver);
}

void Keyboard::UnRegisterObserver(
		Observer * someObserver,
		Event * someEvent)
{
	vector<Observer *>::iterator deleteMe =
        find(_observers.begin(), _observers.end(), someObserver);
    _observers.erase(deleteMe);
}

void Keyboard::Notify() const
{
//	Event thisEvent("keyboardEventHack");
	for(vector<Observer *>::const_iterator itr = _observers.begin();
			itr != _observers.end();
			++itr)
	{
		(*itr)->notifyObs(_kbEvent);
	}
}
