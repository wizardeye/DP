//
//  Context.cpp
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 3..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "Context.h"
#include "VariableExp.h"
#include <iostream>

bool Context::LookUp(const char *name) const {
    auto iter = _lookupTable.find(name);
    
    if (iter != _lookupTable.end()) {
        return iter->second;
    }
    
    std:: cout << "cannot find variable in lookup table.\n";
    return false;   //  @_@
}


void Context::Assign(VariableExp* var, bool result) {
    _lookupTable[var->_name] = result;
}
