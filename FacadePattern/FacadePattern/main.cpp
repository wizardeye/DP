//
//  main.cpp
//  FacadePattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include <string>
#include "Compiler.h"

int main(int argc, const char * argv[]) {
    Compiler compiler;
    std::string input;
    
    std::cout << "source code 를 입력하세요." << std::endl;
    std::cin >> input;
    BytecodeStream output;
    
    compiler.Compile(std::cin, output);
    
    return 0;
}
