//
//  Button.h
//  MediatorPattern
//
//  Created by air seok on 2018. 3. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Button_h
#define Button_h

#include "Widget.h"
#include <iostream>

class Button: public Widget {
public:
    Button(DialogDirector* d): Widget(d) {}
    
    virtual void SetText(const char* text) {
        std::cout << text;
    }
    virtual void HandleMouse(MouseEvent& event) {}
};

#endif /* Button_h */
