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

class SystemController{

public:
	SystemController(ostream & someOutput,
			istream & someInput);
	~SystemController();

	void Init();
	void Run();

private:
	ostream& standard_output;
	istream& standard_input;
};

#endif
