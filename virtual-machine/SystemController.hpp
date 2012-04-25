/*
 * SystemController.hpp
 *
 *  Created on: Apr 19, 2012
 *      Author: mwelch
 */
#ifndef __SYSTEMCONTROLLER_HPP__
#define __SYSTEMCONTROLLER_HPP__

#include <ostream>
using std::ostream;

#include <istream>
using std::istream;

#include "Display.hpp"
#include "Keyboard.hpp"
#include "Event.hpp"
#include <vector>
using std::vector;

class SystemController{

public:
	SystemController(ostream & myOutput, istream & myInput);
	~SystemController();

	void Init();
	void Run();

private:
	ostream& _stdout;
	istream& _stdin;
	Display * _sys_display;
	Keyboard * _sys_keyboard;
};

#endif
