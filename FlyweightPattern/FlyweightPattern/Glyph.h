//
//  Glyph.h
//  FlyweightPattern
//
//  Created by air seok on 2018. 2. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Glyph_h
#define Glyph_h

class GlyphContext;
class Window;
class Font;

class Glyph {
public:
    virtual ~Glyph() {}
    
    virtual void Draw(Window*, GlyphContext&) {}
    
    virtual void SetFont(Font*, GlyphContext&) {}
    virtual Font* GetFont(GlyphContext&) {
        Font* font = nullptr;
        return font;
    }
    
    virtual void First(GlyphContext&) {}
    virtual void Next(GlyphContext&) {}
    virtual bool IsDone(GlyphContext&) { return false; }
    virtual Glyph* Current(GlyphContext&) {
        return this;
    }
    
    virtual void Insert(Glyph*, GlyphContext&) {}
    virtual void Remove(GlyphContext&) {}
    
protected:
    Glyph() {}
};


#endif /* Glyph_h */
