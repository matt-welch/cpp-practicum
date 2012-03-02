/*
 * RegFile.cpp
 *
 *  Created on: Mar 1, 2012
 *      Author: mwelch
 */

#include <RegFile.h>

namespace K1{

uint32_t RegFile::GetRegister(RegName reg) const{
	return _registers.at(reg);
}

void RegFile::PutRegister(RegName reg, uint32_t data){
	_registers[reg] = data;
}

}// K1 namespace
