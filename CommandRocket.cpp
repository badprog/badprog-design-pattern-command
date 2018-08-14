#include "CommandRocket.h"

#include <iostream>

// Badprog.com

//-----------------------------------------------------------------------------
// CTOR
//-----------------------------------------------------------------------------
CommandRocket::CommandRocket() {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// CTOR
//-----------------------------------------------------------------------------
CommandRocket::CommandRocket(std::unique_ptr<SpecialObject> specialObject)
	: _specialObject(std::move(specialObject)) {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// DTOR
//-----------------------------------------------------------------------------
CommandRocket::~CommandRocket() {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// execute
//-----------------------------------------------------------------------------
void CommandRocket::execute() {
	std::cout << __FUNCTION__ << std::endl;
	_specialObject->goodMorning();
}
