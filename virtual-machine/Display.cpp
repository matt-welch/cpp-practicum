/*
 * Display.cpp
 *
 *  Created on: Apr 19, 2012
 *      Author: mwelch
 */

#include "Display.hpp"

Display::Display(ostream& outPut):
	myOutput(outPut)
{
}

Display::~Display(){ }

void Display::PutChar(char c){
    myOutput << c;
}

char Display::GetChar(){
    // Do nothing;
    return 'a';
}

void Display::notify(Event const & someEvent){
	string output = "DisplayEventInfo";
	output = someEvent.getInfo();
	std::cout << "Display:::" << output << endl;
}
