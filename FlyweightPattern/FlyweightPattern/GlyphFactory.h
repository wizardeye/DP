//
//  GlyphFactory.h
//  FlyweightPattern
//
//  Created by air seok on 2018. 2. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef GlyphFactory_h
#define GlyphFactory_h

const int NCHARCODES = 128;

class Character;
class Row;
class Column;

class GlyphFactory {
public:
    GlyphFactory();
    virtual ~GlyphFactory() {}
    
    virtual Character* CreateCharacter(char);
    virtual Row* CreateRow();
    virtual Column* CreateColumn();
    
private:
    Character* _character[NCHARCODES];
};

#endif /* GlyphFactory_h */
