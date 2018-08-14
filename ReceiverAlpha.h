#ifndef __BADPROG_RECEIVER_ALPHA_H__
#define __BADPROG_RECEIVER_ALPHA_H__

// Badprog.com

#include <string>

class ReceiverAlpha
{
public:
	ReceiverAlpha();
	~ReceiverAlpha();

	void hello();
	void goodbye();
	void greetings();

private:
	std::string _greetings;
};

#endif // __BADPROG_RECEIVER_ALPHA_H__