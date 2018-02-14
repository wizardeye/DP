//
//  main.cpp
//  DecoratorPattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//
#include "VisualComponent.h"
#include "BorderDecorator.h"

#include <iostream>

int main(int argc, const char * argv[]) {
    VisualComponent* textView = new TextView;
    VisualComponent* view = new BorderDecorator(textView, 10);
    
    view->Draw();
    
    return 0;
}
