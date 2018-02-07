//
//  TextShape.cpp
//  AdapterPattern
//
//  Created by air seok on 2018. 2. 6..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "TextShape.h"

void TextShape::BoundingBox(Point &bottomLeft, Point &topRight) {
    Coord bottom, left, width, height;
    GetOrigin(bottom, left);
    GetExtent(width, height);
    
    bottomLeft = Point(bottom, left);
    topRight = Point(height, width);
}

Manipulator* TextShape::CreateManipulator() const {
    return new TextManipulator(this);
}

bool TextShape::IsEmpty() const {
    return TextView::IsEmpty();
}

