//
//  Scanner.h
//  FacadePattern
//
//  Created by air seok on 2018. 2. 14..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Scanner_h
#define Scanner_h

#include <iostream>
#include <memory>

class Token {};

class Scanner
{
public:
    Scanner(std::istream& inputStream): _inputStream(inputStream) {
        std::cout << "Scanner 가 생성되었습니다." << std::endl;
    }
    virtual ~Scanner() {}
    
    virtual std::shared_ptr<Token> Scan() {
        std::cout << "Scanning..." << std::endl;
        auto t = std::make_shared<Token>();
        return t;
    }
    
private:
    std::istream& _inputStream;
};

#endif /* Scanner_h */
