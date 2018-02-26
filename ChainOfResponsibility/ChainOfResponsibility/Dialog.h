//
//  Dialog.h
//  ChainOfResponsibility
//
//  Created by air seok on 2018. 2. 26..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Dialog_h
#define Dialog_h

#include "Widget.h"
#include <iostream>

class Dialog: public Widget {
public:
    Dialog(HelpHandler* h, Topic t = NO_HELP_TOPIC): Widget(nullptr) {
        SetHandler(h, t);
    }
    
    virtual void HandleHelp() {
        if (HasHelp()) {
            //  something to do with Topic(t)
            std::cout << "Dialog help...\n";
        } else {
            HelpHandler::HandleHelp();
        }
    }
};

#endif /* Dialog_h */
