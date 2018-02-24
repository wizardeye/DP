//
//  main.cpp
//  FlyweightPattern
//
//  Created by air seok on 2018. 2. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include "GlyphContext.h"
#include "Font.h"
#include "GlyphFactory.h"
#include "Glyph.h"
#include "Row.h"

int main(int argc, const char * argv[]) {
    GlyphContext gc;
    
    Font* times12 = new Font("Times-Roman-12");
    Font* timesItalic12 = new Font("Times-Italic-12");
    
    gc.SetFont(times12, 6);
    gc.Insert(6);
    gc.SetFont(timesItalic12, 6);
    
    return 0;
}
