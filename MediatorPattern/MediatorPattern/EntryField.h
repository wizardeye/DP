//
//  EntryField.h
//  MediatorPattern
//
//  Created by air seok on 2018. 3. 13..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef EntryField_h
#define EntryField_h

#include "Widget.h"

class EntryField: public Widget {
public:
    EntryField(DialogDirector* d): Widget(d) {}
    
    virtual void SetText(const char* text) {}
    virtual const char* GetText() {
        return "get text from entry";
    }
    virtual void HandleMouse(MouseEvent& event) {}
};

#endif /* EntryField_h */
