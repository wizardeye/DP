//
//  TextShape2.h
//  AdapterPattern
//
//  Created by air seok on 2018. 2. 7..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef TextShape2_h
#define TextShape2_h

#include "Shape.h"
#include "TextView.h"

class TextShape2: public Shape
{
public:
    TextShape2(TextView* text);
    
    virtual void BoundingBox(Point& bottomLeft, Point& topRight) const;
    virtual bool IsEmpty() const;
    virtual Manipulator* CreateManipulator() const;
    
private:
    TextView* _text;
};

#endif /* TextShape2_h */
