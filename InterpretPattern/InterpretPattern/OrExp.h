//
//  OrExp.h
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 2..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef OrExp_h
#define OrExp_h

#include "BooleanExp.h"

class OrExp: public BooleanExp {
public:
    OrExp(BooleanExp*, BooleanExp*);
    virtual ~OrExp();
    
    virtual bool Evaluate(Context&);
    virtual BooleanExp* Replace(const char*, BooleanExp&);
    virtual BooleanExp* Copy() const;
    
private:
    BooleanExp* _operand1;
    BooleanExp* _operand2;
};


#endif /* OrExp_h */
