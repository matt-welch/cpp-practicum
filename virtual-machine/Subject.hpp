/*
 * Subject.hpp
 *
 *  Created on: Apr 19, 2012
 *      Author: mwelch
 */

#ifndef SUBJECT_HPP_
#define SUBJECT_HPP_

#include "Observer.hpp"

class Subject{
public:
	Subject();
	virtual ~Subject();
	virtual void RegisterObserver(
			Observer * someObserver, Event * someEvent);
	virtual void UnRegisterObserver(
				Observer * someObserver, Event * someEvent);
	virtual void EmitEvent(Event * someEvent);
	virtual void Notify( );
};


#endif /* SUBJECT_HPP_ */
