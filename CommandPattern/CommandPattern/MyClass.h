//
//  MyClass.h
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef MyClass_h
#define MyClass_h

#include "SimpleCommand.h"
#include <iostream>

class MyClass {
public:
    void Action() {
        std::cout << "my class's simple action.\n";
    }
};


#endif /* MyClass_h */
