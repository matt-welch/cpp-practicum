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


class Observer {
public:
	Observer(){};

	virtual ~Observer(){};

	virtual void notify(Event const& someEvent)=0;

};

/*
// compiler doesn't like this but would be a convenient typedef
typedef vector<Observer>::iterator ObserverItr;
*/

#endif /* OBSERVER_HPP_ */
