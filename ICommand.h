#ifndef __BADPROG_ICOMMAND_H__
#define __BADPROG_ICOMMAND_H__

#include <iostream>
#include <memory>

// Badprog.com

class ICommand
{
public:
	virtual ~ICommand() = 0;
	virtual void execute() = 0;

protected:
	ICommand& operator=(const ICommand&) { return *this; }
};

inline ICommand::~ICommand() {}

//_____________________________________________________________________________
// Template
//_____________________________________________________________________________

//-----------------------------------------------------------------------------
// CommandBasic
//-----------------------------------------------------------------------------
template <typename T>
class CommandBasic : public ICommand {
public:
	typedef void (T:: *Action)();	// Action is a function pointer to T

	//-----------------------------------------------------------------------------
	// CTOR
	//-----------------------------------------------------------------------------
	// CommandBasic(T *receiver, Action action) :
	CommandBasic(std::shared_ptr<T> receiver, Action action)
		: _receiver(receiver), _action(action) {
		std::cout << __FUNCTION__ << std::endl;
	}

	//-----------------------------------------------------------------------------
	// DTOR
	//-----------------------------------------------------------------------------
	~CommandBasic() {
		std::cout << __FUNCTION__ << std::endl;
	}

	// in case we want to copy a CommandBasic outside the template
	CommandBasic(const CommandBasic &other) : _receiver(std::make_shared(*other._receiver)) {}
	CommandBasic(CommandBasic&& other) : _receiver(std::move(other._receiver)) {}
	CommandBasic& operator=(CommandBasic other) { 
		std::swap(*this, other);
		return *this;
	}


	//-----------------------------------------------------------------------------
	// execute
	//-----------------------------------------------------------------------------
	virtual void execute() {
		std::cout << __FUNCTION__ << std::endl;
		(_receiver.get()->*_action)();
	}

private:
	Action 	_action;	// Action is already a pointer
	std::shared_ptr<T>	_receiver;
};

#endif // __BADPROG_ICOMMAND_H__