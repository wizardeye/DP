//
//  HelpHandler.cpp
//  ChainOfResponsibility
//
//  Created by air seok on 2018. 2. 26..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "HelpHandler.h"

HelpHandler::HelpHandler(HelpHandler* h, Topic t): _successor(h), _topic(t)
{}


bool HelpHandler::HasHelp() {
    return _topic != NO_HELP_TOPIC;
}


void HelpHandler::HandleHelp() {
    if (_successor != nullptr) {
        _successor->HandleHelp();
    }
}


void HelpHandler::SetHandler(HelpHandler *h, Topic t) {
    _successor = h;
    _topic = t;
}
