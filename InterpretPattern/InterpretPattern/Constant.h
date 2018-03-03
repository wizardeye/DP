//
//  Constant.h
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 2..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Constant_h
#define Constant_h

#include "BooleanExp.h"

class Constant: public BooleanExp {
public:
    Constant(bool);
    virtual ~Constant();
    
    virtual bool Evaluate(Context&);
    virtual BooleanExp* Replace(const char*, BooleanExp&);
    virtual BooleanExp* Copy() const;
    
private:
    bool _boolean;
};

#endif /* Constant_h */
