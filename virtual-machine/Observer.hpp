/*
 * Observer.hpp
 *
 *  Created on: Apr 19, 2012
 *      Author: mwelch
 */

#ifndef OBSERVER_HPP_
#define OBSERVER_HPP_

#include "Event.hpp"

class Observer {

	Observer(){};

	~Observer(){};

	virtual void notify(Event const& someEvent)=0;

};

#endif /* OBSERVER_HPP_ */
