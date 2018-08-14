#include "ReceiverAlpha.h"
#include <iostream>

// Badprog.com

//-----------------------------------------------------------------------------
// CTOR
//-----------------------------------------------------------------------------
ReceiverAlpha::ReceiverAlpha() : _greetings("Have a nice day :p") {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// DTOR
//-----------------------------------------------------------------------------
ReceiverAlpha::~ReceiverAlpha() {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// hello
//-----------------------------------------------------------------------------
void ReceiverAlpha::hello() {
	std::cout << __FUNCTION__ << std::endl;
	_greetings = "Hello world! :D";
	std::cout << _greetings << std::endl;
}

//-----------------------------------------------------------------------------
// greetings
//-----------------------------------------------------------------------------
void ReceiverAlpha::greetings() {
	std::cout << __FUNCTION__ << std::endl;
	std::cout << _greetings << std::endl;
}

//-----------------------------------------------------------------------------
// goodbye
//-----------------------------------------------------------------------------
void ReceiverAlpha::goodbye() {
	std::cout << __FUNCTION__ << std::endl;
	_greetings = "Goodbye see you soon ;)";
	std::cout << _greetings << std::endl;
}
