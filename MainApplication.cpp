#include "MainApplication.h"
#include <iostream>

// Badprog.com

//-----------------------------------------------------------------------------
// CTOR
//-----------------------------------------------------------------------------
MainApplication::MainApplication() {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// DTOR
//-----------------------------------------------------------------------------
MainApplication::~MainApplication() {
	std::cout << __FUNCTION__ << std::endl;
}

//-----------------------------------------------------------------------------
// goodEvening
//-----------------------------------------------------------------------------
void MainApplication::goodEvening() const {
	std::cout << __FUNCTION__ << std::endl;
}

