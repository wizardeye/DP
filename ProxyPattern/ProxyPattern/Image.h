//
//  Image.h
//  ProxyPattern
//
//  Created by air seok on 2018. 2. 24..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Image_h
#define Image_h

#include "Graphic.h"

class Image: public Graphic {
public:
    Image(const char* file) {}
    virtual ~Image() {}
    
    virtual void Draw(const Point& at) {}
    virtual void HandleMouse(Event& evnet) {}
    
    virtual const Point& GetExtent() { return *_point; }
    virtual void Load(std::istream& from) {}
    virtual void Save(std::ostream& to) {}
    
private:
    Point* _point;
};

#endif /* Image_h */
