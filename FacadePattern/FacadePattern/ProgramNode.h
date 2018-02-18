//
//  ProgramNode.h
//  FacadePattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef ProgramNode_h
#define ProgramNode_h

#include <iostream>
#include <list>

class CodeGenerator;

class ProgramNode
{
public:
    ProgramNode() {}
    
    virtual void GetSourcePosition(int& line, int& index) {}
    
    virtual void Add(ProgramNode*) {}
    virtual void Remove(ProgramNode*) {}
    
    virtual void Traverse(CodeGenerator&) {
        std::cout << "ProgramNode Traversing..." << std::endl;
    }
};


class ExpressionNode: public ProgramNode
{
public:
    virtual void Traverse(CodeGenerator&);
    
private:
    std::list<ProgramNode*> _children;
};


#include "CodeGenerator.h"

void ExpressionNode::Traverse(CodeGenerator& cg) {
    cg.Visit(this);
    
    for (auto c : _children) {
        c->Traverse(cg);
    }
}


class StatementNode: public ProgramNode
{
public:
    virtual void Traverse(CodeGenerator&) {}
    
private:
    std::list<ProgramNode*> _children;
};

#endif /* ProgramNode_h */
