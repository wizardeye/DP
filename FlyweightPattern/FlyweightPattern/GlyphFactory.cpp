//
//  GlyphFactory.cpp
//  FlyweightPattern
//
//  Created by air seok on 2018. 2. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "GlyphFactory.h"
#include "Character.h"
#include "Row.h"
#include "Column.h"

GlyphFactory::GlyphFactory() {
    for (int i = 0; i < NCHARCODES; i++) {
        _character[i] = 0;
    }
}


Character* GlyphFactory::CreateCharacter(char c) {
    if (!_character[c]) {
        _character[c] = new Character(c);
    }
    
    return _character[c];
}


Row* GlyphFactory::CreateRow() {
    return new Row;
}


Column* GlyphFactory::CreateColumn() {
    return new Column;
}
