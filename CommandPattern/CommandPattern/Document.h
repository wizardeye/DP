//
//  Document.h
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Document_h
#define Document_h

#include <iostream>

class Document {
public:
    Document(const char*) {}
    
    void Open() {
        std::cout << "doc open.\n";
    }
    
    void Paste() {
        std::cout << "doc paste.\n";
    }
};

#endif /* Document_h */
