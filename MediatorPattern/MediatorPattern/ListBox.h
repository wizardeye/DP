//
//  ListBox.h
//  MediatorPattern
//
//  Created by air seok on 2018. 3. 13..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef ListBox_h
#define ListBox_h

#include "Widget.h"
#include <list>

class ListBox: public Widget {
public:
    ListBox(DialogDirector* d): Widget(d) {}
    
    virtual const char* GetSelection() {
        return "get selection from list";
    }
    virtual void SetList(std::list<char*>* listItems) {}
    virtual void HandleMouse(MouseEvent& event) {}
};


#endif /* ListBox_h */
