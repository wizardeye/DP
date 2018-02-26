//
//  Button.h
//  ChainOfResponsibility
//
//  Created by air seok on 2018. 2. 26..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Button_h
#define Button_h

#include "Widget.h"
#include <iostream>

class Button: public Widget {
public:
    Button(Widget* h, Topic t = NO_HELP_TOPIC): Widget(h, t) {}
    
    virtual void HandleHelp() {
        if (HasHelp()) {
            //  something to do with Topic(t)
            std::cout << "Button help...\n";
        } else {
            //  HelpHandler IF 구현체가 제공하는 help 예제에서는 Dialog
            HelpHandler::HandleHelp();
        }
    }
};

#endif /* Button_h */
