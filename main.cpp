//
#include <memory>
#include "Invoker.h"
#include "CommandFly.h"
#include "CommandRocket.h"
#include "ReceiverAlpha.h"
#include "ReceiverBeta.h"
#include "MainApplication.h"
#include "SpecialObject.h"

// Badprog.com

//-----------------------------------------------------------------------------
// main
//-----------------------------------------------------------------------------
int main() {

	// init
	auto receiverAlpha		= std::make_shared<ReceiverAlpha>();
	auto receiverBeta		= std::make_shared<ReceiverBeta>();
	auto mainApplication 	= std::make_unique<MainApplication>();
	auto specialObject 		= std::make_unique<SpecialObject>();
	auto commandFly 		= std::make_unique<CommandFly>(std::move(mainApplication));
	auto commandRocket 		= std::make_unique<CommandRocket>(std::move(specialObject));
	auto commandBasicAlpha1 = std::make_unique<CommandBasic<ReceiverAlpha>>(receiverAlpha, &ReceiverAlpha::greetings);
	auto commandBasicAlpha2 = std::make_unique<CommandBasic<ReceiverAlpha>>(receiverAlpha, &ReceiverAlpha::hello);
	auto commandBasicAlpha3 = std::make_unique<CommandBasic<ReceiverAlpha>>(receiverAlpha, &ReceiverAlpha::goodbye);
	auto commandBasicBeta 	= std::make_unique<CommandBasic<ReceiverBeta>>(receiverBeta, &ReceiverBeta::howAreYou);
	Invoker invoker;

	// invoker
	invoker.addCommand(std::move(commandBasicAlpha1));
	invoker.addCommand(std::move(commandBasicAlpha2));
	invoker.addCommand(std::move(commandBasicAlpha3));
	invoker.addCommand(std::move(commandBasicBeta));
	invoker.addCommand(std::move(commandFly));
	invoker.addCommand(std::move(commandRocket));
	invoker.executeVectorOfCommands();

	return 0;
}

