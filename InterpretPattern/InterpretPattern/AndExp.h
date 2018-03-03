//
//  AndExp.h
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 2..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef AndExp_h
#define AndExp_h

#include "BooleanExp.h"

class AndExp: public BooleanExp {
public:
    AndExp(BooleanExp*, BooleanExp*);
    virtual ~AndExp();
    
    virtual bool Evaluate(Context&);
    virtual BooleanExp* Replace(const char*, BooleanExp&);
    virtual BooleanExp* Copy() const;
    
private:
    BooleanExp* _operand1;
    BooleanExp* _operand2;
};

#endif /* AndExp_h */
