//
//  Row.h
//  FlyweightPattern
//
//  Created by air seok on 2018. 2. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Row_h
#define Row_h

#include "Glyph.h"

class Row: public Glyph {
public:
    Row() {}
    
    virtual void Draw(Window*, GlyphContext&) {}
};

#endif /* Row_h */
