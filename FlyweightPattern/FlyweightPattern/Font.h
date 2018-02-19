//
//  Font.h
//  FlyweightPattern
//
//  Created by air seok on 2018. 2. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Font_h
#define Font_h

#include <iostream>
#include <string>

class Font {
public:
    Font(std::string s) {
        std::cout << "create font: " << s << std::endl;
    }
};

#endif /* Font_h */
