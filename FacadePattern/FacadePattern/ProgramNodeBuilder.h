//
//  ProgramNodeBuilder.h
//  FacadePattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef ProgramNodeBuilder_h
#define ProgramNodeBuilder_h

#include <iostream>
#include "ProgramNode.h"

class ProgramNodeBuilder
{
public:
    ProgramNodeBuilder() {
        _node = nullptr;
        std::cout << "ProgramNodeBuilder 가 생성되었습니다." << std::endl;
    }
    
    virtual void NewVariable(const char* variableName) const {}
    virtual void NewAssignment(ProgramNode* variable, ProgramNode* expression) const {}
    virtual void NewReturnStatement(ProgramNode* value) const {}
    virtual void NewCondition(ProgramNode* condition, ProgramNode* truePart, ProgramNode* falsePart) const {}
    
    ProgramNode* GetRootNode() {
        std::cout << "GetRootNode ... " << std::endl;
        
        if (_node == nullptr)
            _node = new ProgramNode;
            
        return _node;
    }
    
private:
    ProgramNode* _node;
};

#endif /* ProgramNodeBuilder_h */
