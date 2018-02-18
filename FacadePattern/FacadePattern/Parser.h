//
//  Parser.h
//  FacadePattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Parser_h
#define Parser_h

#include <iostream>

class Scanner;
class ProgramNodeBuilder;

class Parser
{
public:
    Parser() {
        std::cout << "Parser 가 생성되었습니다." << std::endl;
    }
    
    virtual ~Parser() {}
    
    virtual void Parse(Scanner&, ProgramNodeBuilder&) {
        std::cout << "parsing..." << std::endl;
    }
};

#endif /* Parser_h */
