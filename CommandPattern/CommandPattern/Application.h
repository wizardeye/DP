//
//  Application.h
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Application_h
#define Application_h

#include <iostream>
#include "Document.h"

class Application {
public:
    void Add(Document* d) {
        std::cout << "doc add.\n";
    }
};

#endif /* Application_h */
