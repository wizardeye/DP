//
//  main.cpp
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "SimpleCommand.h"
#include "MyClass.h"
int main(int argc, const char * argv[]) {
    MyClass* receiver = new MyClass;
    
    Command* aCommand = new SimpleCommand<MyClass>(receiver, &MyClass::Action);
    aCommand->Execute();
    
    return 0;
}
