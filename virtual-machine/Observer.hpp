/*
 * Observer.hpp
 *
 *  Created on: Apr 19, 2012
 *      Author: mwelch
 */

#ifndef OBSERVER_HPP_
#define OBSERVER_HPP_

#include "Event.hpp"
#include <vector>
using std::vector;

class Observer {
public:
	Observer(){};

	virtual ~Observer(){};

	virtual void notifyObs(Event const & someEvent)=0;

};

// compiler doesn't like this but would be a convenient typedef
typedef vector<Observer*>::iterator ObserverItr;

#endif /* OBSERVER_HPP_ */
