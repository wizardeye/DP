//
//  GlyphContext.h
//  FlyweightPattern
//
//  Created by air seok on 2018. 2. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef GlyphContext_h
#define GlyphContext_h

#include <iostream>

class BTree;
class Font;

class GlyphContext {
public:
    GlyphContext() {
        _index = 0;
        _fonts = nullptr;
    }
    
    virtual ~GlyphContext() {}
    
    virtual void Next(int step = 1) {}
    
    virtual void Insert(int quantity = 1) {
        std::cout << "glyph insert..." << std::endl;
    }
    
    virtual Font* GetFont() {
        Font* font = nullptr;
        return font; }
    
    virtual void SetFont(Font*, int span = 1) {
        std::cout << "set font..." << std::endl;
    }
    
private:
    int _index;
    BTree* _fonts;
};

#endif /* GlyphContext_h */
