//
//  OpenCommand.h
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef OpenCommand_h
#define OpenCommand_h

#include "Command.h"
#include "Application.h"

class OpenCommand: public Command {
public:
    OpenCommand(Application*);
    
    virtual void Execute();
    
protected:
    virtual const char* AskUser();
    
private:
    Application* _application;
    char* _response;
};

#endif /* OpenCommand_h */
