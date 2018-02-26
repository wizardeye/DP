//
//  Application.h
//  ChainOfResponsibility
//
//  Created by air seok on 2018. 2. 26..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Application_h
#define Application_h

#include "HelpHandler.h"
#include <iostream>

class Application: public HelpHandler {
public:
    Application(Topic t): HelpHandler(nullptr, t) {}
    
    virtual void HandleHelp() {
        //  something to do with Topic(t)
        std::cout << "application help...\n";
    }
};

#endif /* Application_h */
