//
//  BooleanExp.h
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 2..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef BooleanExp_h
#define BooleanExp_h

#include "Context.h"

class BooleanExp {
public:
    BooleanExp() {}
    virtual ~BooleanExp() {}
    
    virtual bool Evaluate(Context&) = 0;
    virtual BooleanExp* Replace(const char*, BooleanExp&) = 0;
    virtual BooleanExp* Copy() const = 0;
};

#endif /* BooleanExp_h */
