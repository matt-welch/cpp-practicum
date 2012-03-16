/*
 * Keyboard.cpp
 *
 *  Created on: Mar 15, 2012
 *      Author: mwelch
 */

#include "Keyboard.hpp"

char Keyboard::GetChar(){
	char c;
	myInput >> c;
	return c;
}

void Keyboard::PutChar(char c){
	// does nothing
}
