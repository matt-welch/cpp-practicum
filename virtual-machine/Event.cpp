/*
 * Event.cpp
 *
 *  Created on: Apr 22, 2012
 *      Author: mwelch
 */

#include "Event.hpp"

Event::Event(){
	_myInfo = "";
}

Event::Event(string someInfo):
		_myInfo(someInfo)
{

}

string Event::getInfo(){
	return _myInfo;
}

void Event::setInfo(string someInfo){
	_myInfo = someInfo;
}

