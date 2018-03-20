//
//  Widget.h
//  MediatorPattern
//
//  Created by air seok on 2018. 3. 12..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Widget_h
#define Widget_h

#include "DialogDirector.h"
class MouseEvent;

class Widget {
public:
    Widget(DialogDirector* d): _director(d) {}
    virtual void Changed(Widget* w);
    virtual void HandleMouse(MouseEvent& e) {}
    
private:
    DialogDirector* _director;
};


#endif /* Widget_h */
