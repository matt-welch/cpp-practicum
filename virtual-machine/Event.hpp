/*
 * Event.hpp
 *
 *  Created on: Apr 19, 2012
 *      Author: mwelch
 */

#ifndef EVENT_HPP_
#define EVENT_HPP_

#include <string>
using std::string;

class Event{
public:
	Event();
	Event(string someInfo);
	~Event();
	string getInfo(void) const;
	void  setInfo(string someInfo);
private:
	string _myInfo;
};


#endif /* EVENT_HPP_ */
