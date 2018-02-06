//
//  Shape.h
//  AdapterPattern
//
//  Created by air seok on 2018. 2. 6..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Shape_h
#define Shape_h

#include "Coord.h"

class Point {
public:
    Point(Coord x, Coord y) {}
};

class Manipulator
{
};

class Shape
{
public:
    virtual void BoundingBox(Point& bottomLeft, Point& topRight){}
    virtual Manipulator* CreateManipulator() const { return new Manipulator; }
};

#endif /* Shape_h */
