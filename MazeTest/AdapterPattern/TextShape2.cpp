//
//  TextShape2.cpp
//  AdapterPattern
//
//  Created by air seok on 2018. 2. 7..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "TextShape2.h"

TextShape2::TextShape2(TextView* t) {
    _text = t;
}

void TextShape2::BoundingBox(Point &bottomLeft, Point &topRight) const {
    Coord bottom, left, width, height;
    
    _text->GetOrigin(bottom, left);
    _text->GetExtent(width, height);
}

bool TextShape2::IsEmpty() const {
    return _text->IsEmpty();
}

Manipulator* TextShape2::CreateManipulator() const {
    return new Manipulator;
}
