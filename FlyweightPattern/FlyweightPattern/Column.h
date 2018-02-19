//
//  Column.h
//  FlyweightPattern
//
//  Created by air seok on 2018. 2. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Column_h
#define Column_h

#include "Glyph.h"

class Column: public Glyph {
public:
    Column() {}
    
    virtual void Draw(Window*, GlyphContext&) {}
};

#endif /* Column_h */
