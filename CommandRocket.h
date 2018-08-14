#ifndef __BADPROG_COMMAND_ROCKET_H__
#define __BADPROG_COMMAND_ROCKET_H__

// Badprog.com

#include <memory>
#include "ICommand.h"
#include "SpecialObject.h"

class CommandRocket : public ICommand
{
public:
	CommandRocket();
	CommandRocket(std::unique_ptr<SpecialObject> specialObject);
	~CommandRocket();

	void execute() 	override;

private:
	std::unique_ptr<SpecialObject> _specialObject;
};

#endif // __BADPROG_COMMAND_ROCKET_H__
