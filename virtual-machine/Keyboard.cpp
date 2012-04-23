/*
 * Keyboard.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: mwelch
 */

#include "Keyboard.hpp"

Keyboard::Keyboard(istream & inPut):
				_myInput(inPut)
{ }

Keyboard::~Keyboard(){ }

char Keyboard::GetChar(){
	char c;
	_myInput >> c;
	return c;
}

void Keyboard::PutChar(char c)
{
	// does nothing
}

void Keyboard::EmitEvent(Event * someEvent)
{
	string someInfo = someEvent->getInfo();
	_myEvent.setInfo(someInfo);
	cout << "Interesting things:: "  << endl;
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

void Keyboard::Notify()
{
	for(vector<Observer*>::iterator i = _observers.begin();
			i != _observers.end();
			++i)
	{
		(*i)->notify(_myEvent);
	}
}
