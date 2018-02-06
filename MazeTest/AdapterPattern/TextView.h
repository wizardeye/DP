//
//  TextView.h
//  AdapterPattern
//
//  Created by air seok on 2018. 2. 6..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef TextView_h
#define TextView_h

#include "Coord.h"

class TextView
{
public:
    TextView() {}
    void GetOrigin(Coord& x, Coord& y) {}
    void GetExtent(Coord& width, Coord& height) {}
    virtual bool IsEmpty() const { return true; }
};

#endif /* TextView_h */
