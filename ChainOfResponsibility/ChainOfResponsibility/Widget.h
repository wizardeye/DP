//
//  Widget.h
//  ChainOfResponsibility
//
//  Created by air seok on 2018. 2. 26..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Widget_h
#define Widget_h

#include "HelpHandler.h"

class Widget: public HelpHandler {
protected:
    Widget(Widget* parent, Topic t = NO_HELP_TOPIC): HelpHandler(parent, t) {
        _parent = parent;
    }
    
private:
    Widget* _parent;
};

#endif /* Widget_h */
