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
	Event(){}
	Event(string someInfo){}
	~Event(){}
	string getInfo()
    {
        return _myInfo;
    }
	void setInfo(string someInfo)
    {   
        _myInfo = someInfo;
    }
private:
	string _myInfo;
};


#endif /* EVENT_HPP_ */
