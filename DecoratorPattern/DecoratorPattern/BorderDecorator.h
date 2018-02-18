//
//  BorderDecorator.h
//  DecoratorPattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef BorderDecorator_h
#define BorderDecorator_h

#include "Decorator.h"
#include <iostream>

class BorderDecorator: public Decorator
{
public:
    BorderDecorator(VisualComponent* component, int width): Decorator(component), _width(width) {}
    
    virtual void Draw();
    
private:
    void DrawBorder();
    int _width;
};


void BorderDecorator::Draw() {
    Decorator::Draw();  //  Original fn
    DrawBorder();   //  Decorated fn
}

void BorderDecorator::DrawBorder() {
    std::cout << "[Decorator] Draw border size '" << _width << "'" << std::endl;
}

#endif /* BorderDecorator_h */
