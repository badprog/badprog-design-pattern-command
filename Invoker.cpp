#include "Invoker.h"
#include <iostream>

// Badprog.com

//-----------------------------------------------------------------------------
// CTOR
//-----------------------------------------------------------------------------
Invoker::Invoker() {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// DTOR
//-----------------------------------------------------------------------------
Invoker::~Invoker() {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// addCommand
//-----------------------------------------------------------------------------
void Invoker::addCommand(std::unique_ptr<ICommand> command) {
	std::cout << __FUNCTION__ << std::endl;
	_vectorOfCommands.push_back(std::move(command));
}

//-----------------------------------------------------------------------------
// executeVectorOfCommands
//-----------------------------------------------------------------------------
void Invoker::executeVectorOfCommands() const {
	std::cout << std::endl;
	std::cout << __FUNCTION__ << std::endl;
	for (unsigned int i = 0; i < _vectorOfCommands.size(); ++i) {
		_vectorOfCommands[i]->execute();
	}
	std::cout << std::endl;
}

