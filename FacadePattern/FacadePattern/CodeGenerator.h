//
//  CodeGenerator.h
//  FacadePattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef CodeGenerator_h
#define CodeGenerator_h

#include <iostream>

class StatementNode;
class ExpressionNode;
class BytecodeStream;

class CodeGenerator
{
public:
    virtual void Visit(StatementNode*) {
        std::cout << "StatementNode visitor action..." << std::endl;
    }
    
    virtual void Visit(ExpressionNode*) {
        std::cout << "ExpressionNode visitor action..." << std::endl;
    }
    
protected:
    CodeGenerator(BytecodeStream& bs): _output(bs) {}
    
    BytecodeStream& _output;
};


class RISCCodeGenerator: public CodeGenerator
{
public:
    RISCCodeGenerator(BytecodeStream& output): CodeGenerator(output) {
        std::cout << "RISCCodeGenerator 가 생성되었습니다." << std::endl;
    }
};
#endif /* CodeGenerator_h */
