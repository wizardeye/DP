//
//  Character.h
//  FlyweightPattern
//
//  Created by air seok on 2018. 2. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Character_h
#define Character_h

#include "Glyph.h"

class Character: public Glyph {
public:
    Character(char c): _charCode(c) {}
    
    virtual void Draw(Window*, GlyphContext&) {}
    
private:
    char _charCode;
};

#endif /* Character_h */
