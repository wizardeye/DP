//
//  Compiler.h
//  FacadePattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Compiler_h
#define Compiler_h

#include <iostream>
#include "Scanner.h"
#include "ProgramNodeBuilder.h"
#include "Parser.h"
#include "ProgramNode.h"
#include "CodeGenerator.h"

class BytecodeStream {};

class Compiler
{
public:
    Compiler() {}
    
    virtual void Compile(std::istream&, BytecodeStream&);
};

void Compiler::Compile(std::istream& input, BytecodeStream& output) {
    Scanner scanner(input);
    ProgramNodeBuilder builder;
    Parser parser;
    parser.Parse(scanner, builder);
    
    RISCCodeGenerator generator(output);
    ProgramNode* parseTree = builder.GetRootNode();
    parseTree->Traverse(generator);
}

#endif /* Compiler_h */
