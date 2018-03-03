//
//  VariableExp.h
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 2..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef VariableExp_h
#define VariableExp_h

#include "BooleanExp.h"

class Context;

class VariableExp: public BooleanExp {
public:
    VariableExp(const char*);
    virtual ~VariableExp();
    
    virtual bool Evaluate(Context&);
    virtual BooleanExp* Replace(const char*, BooleanExp&);
    virtual BooleanExp* Copy() const;
    
    char* _name;
};

#endif /* VariableExp_h */
