/*
 * SystemController.cpp
 *
 *  Created on: Apr 19, 2012
 *      Author: mwelch
 */

#include "SystemController.hpp"

SystemController::SystemController(
		ostream & myOutput, istream & myInput):
	_stdin(myInput),
	_stdout(myOutput)
{
	this->Init();
}

SystemController::~SystemController(){

}

void SystemController::Init(){
	_sys_display = new Display(_stdout);
	_sys_keyboard = new Keyboard(_stdin);
	Event * keypressEvent = new Event("Key-press Happened");
	_sys_keyboard->RegisterObserver(_sys_display, keypressEvent);
}

void SystemController::Run(){

}


