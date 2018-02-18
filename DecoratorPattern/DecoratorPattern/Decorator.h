//
//  Decorator.h
//  DecoratorPattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Decorator_h
#define Decorator_h

#include "VisualComponent.h"

class Decorator: public VisualComponent
{
public:
    Decorator(VisualComponent* component): _component(component) {}
    
    virtual void Draw();
    virtual void Resize();
    
private:
    VisualComponent* _component;
};


void Decorator::Draw() {
    _component->Draw();     //  기존 구현을 가져온다.
}

void Decorator::Resize() {
    _component->Resize();
}

#endif /* Decorator_h */
