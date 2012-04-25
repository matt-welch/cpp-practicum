/*
 * SystemController.cpp
 *
 *  Created on: Apr 19, 2012
 *      Author: mwelch
 */

#include "SystemController.hpp"

SystemController::SystemController(ostream & someOutput,
									istream & someInput):
	standard_input(someInput),
	standard_output(someOutput)
{
	this->Init();

}

SystemController::~SystemController(){

}

void SystemController::Init(){
	Display * disp = new Display(standard_output);
	Event * someEvent = new Event("Key-press Happened");
	Keyboard * keyb = new Keyboard(standard_input);
	keyb->RegisterObserver(disp, someEvent);
}

void SystemController::Run(){

}


