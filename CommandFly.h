#ifndef __BADPROG_COMMAND_FLY_H__
#define __BADPROG_COMMAND_FLY_H__

// Badprog.com

#include <memory>
#include "ICommand.h"
#include "MainApplication.h"

class CommandFly : public ICommand
{
public:
	CommandFly();
	CommandFly(std::unique_ptr<MainApplication> application); // needs a pointer because we need an IReceiver (interface)
	~CommandFly();

	void execute() 	override;

private:
	std::unique_ptr<MainApplication> _application;
};

#endif // __BADPROG_COMMAND_FLY_H__
