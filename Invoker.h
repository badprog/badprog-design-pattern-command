#ifndef __BADPROG_INVOKER_H__
#define __BADPROG_INVOKER_H__

// Badprog.com

#include <memory>
#include <vector>
#include "ICommand.h"

class Invoker
{
public:
	Invoker();
	~Invoker();
	void addCommand(std::unique_ptr<ICommand> command);
	void executeVectorOfCommands() const;

private:
	std::vector<std::unique_ptr<ICommand>> _vectorOfCommands;
};

#endif // __BADPROG_INVOKER_H__