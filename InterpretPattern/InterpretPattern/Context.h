//
//  Context.h
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 2..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Context_h
#define Context_h

#include <map>

class VariableExp;

class Context {
public:
    bool LookUp(const char*) const;
    void Assign(VariableExp*, bool);
    
private:
    std::map<const char*, bool> _lookupTable;
};

#endif /* Context_h */
