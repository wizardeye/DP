//
//  TextShape.h
//  AdapterPattern
//
//  Created by air seok on 2018. 2. 6..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef TextShape_h
#define TextShape_h

#include "Shape.h"
#include "TextView.h"

class TextShape: public Shape, private TextView
{
public:
    TextShape() {}
    
    virtual void BoundingBox(Point& bottomLeft, Point& topRight);
    virtual bool IsEmpty() const;
    virtual Manipulator* CreateManipulator() const;
};

#endif /* TextShape_h */
