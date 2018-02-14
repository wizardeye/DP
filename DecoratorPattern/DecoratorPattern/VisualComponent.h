//
//  VisualComponent.h
//  DecoratorPattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef VisualComponent_h
#define VisualComponent_h

#include <iostream>

class VisualComponent
{
public:
    virtual void Draw() = 0;
    virtual void Resize() = 0;
};


class TextView: public VisualComponent
{
public:
    virtual void Draw() {
        std::cout << "Text view drawing." << std::endl;
    }
    
    virtual void Resize() {}
};

#endif /* VisualComponent_h */
