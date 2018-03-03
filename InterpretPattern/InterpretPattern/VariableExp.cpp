//
//  VariableExp.cpp
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 2..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "VariableExp.h"
#include <string.h>

VariableExp::VariableExp(const char* name): BooleanExp() {
    _name = strdup(name);
}


VariableExp::~VariableExp() {}

bool VariableExp::Evaluate(Context& aContext) {
    return aContext.LookUp(_name);
}


BooleanExp* VariableExp::Copy() const {
    return new VariableExp(_name);
}


BooleanExp* VariableExp::Replace(const char *name, BooleanExp &exp) {
    if (strcmp(name, _name) == 0) {
        return exp.Copy();
    } else {
        return new VariableExp(_name);
    }
}
