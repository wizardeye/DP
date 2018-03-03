//
//  OrExp.cpp
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 2..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "OrExp.h"

OrExp::OrExp(BooleanExp* op1, BooleanExp* op2): BooleanExp() {
    _operand1 = op1;
    _operand2 = op2;
}

OrExp::~OrExp() {}


bool OrExp::Evaluate(Context &aContext) {
    return _operand1->Evaluate(aContext) || _operand2->Evaluate(aContext);
}


BooleanExp* OrExp::Copy() const {
    return new OrExp(_operand1->Copy(), _operand2->Copy());
}


BooleanExp* OrExp::Replace(const char *name, BooleanExp &exp) {
    return new OrExp(_operand1->Replace(name, exp), _operand2->Replace(name, exp));
}

