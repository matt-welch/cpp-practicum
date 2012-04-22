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
	~Subject();
	void RegisterObserver(
			Observer const & someObserver, Event const & someEvent);
	void UnRegisterObserver(
				Observer const & someObserver, Event const & someEvent);
	void EmitEvent(Event const) = 0;
protected:
	void Notify( );
};


#endif /* SUBJECT_HPP_ */
