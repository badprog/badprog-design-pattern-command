#include "CommandFly.h"
#include <iostream>

// Badprog.com

//-----------------------------------------------------------------------------
// CTOR
//-----------------------------------------------------------------------------
CommandFly::CommandFly() {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// CTOR parameterized
//-----------------------------------------------------------------------------
CommandFly::CommandFly(std::unique_ptr<MainApplication> application) 
	: _application(std::move(application)) {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// DTOR
//-----------------------------------------------------------------------------
CommandFly::~CommandFly() {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// execute
//-----------------------------------------------------------------------------
void CommandFly::execute() {
	std::cout << __FUNCTION__ << std::endl;
	_application->goodEvening();
}
