//
//  MacroCommand.h
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef MacroCommand_h
#define MacroCommand_h

#include "Command.h"
#include <list>
#include <iostream>

class MacroCommand: public Command {
public:
    MacroCommand();
    virtual ~MacroCommand() {}
    
    virtual void Add(Command*) { std::cout << "macro cmd Add()\n"; }
    virtual void Remove(Command*) { std::cout << "macro cmd Remove()\n"; }
    virtual void Execute();
    
private:
    std::list<Command*>* _cmds;
};

#endif /* MacroCommand_h */
