//
//  Graphic.h
//  ProxyPattern
//
//  Created by air seok on 2018. 2. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Graphic_h
#define Graphic_h

#include <iostream>

class Point {
    
};

class Event {
    
};

class Graphic {
public:
    Graphic() {}
    virtual ~Graphic();
    
    virtual void Draw(const Point& at) = 0;
    virtual void HandleMouse(Event* event) = 0;
    
    virtual const Point& GetExtent() = 0;
    
    virtual void Load(std::istream& from) = 0;
    virtual void Save(std::ostream& to) = 0;
    
protected:
    Graphic();
};

#endif /* Graphic_h */
