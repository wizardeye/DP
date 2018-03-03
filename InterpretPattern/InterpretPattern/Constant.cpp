//
//  Constant.cpp
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 2..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "Constant.h"

Constant::Constant(bool boolean): BooleanExp() {
    _boolean = boolean;
}

Constant::~Constant() {}

bool Constant::Evaluate(Context &) {
    return _boolean;
}

BooleanExp* Constant::Copy() const {
    return new Constant(_boolean);
}

BooleanExp* Constant::Replace(const char *, BooleanExp &) {
    //  no idea
    return new Constant(_boolean);
}
