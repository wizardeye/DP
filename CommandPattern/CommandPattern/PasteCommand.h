//
//  PasteCommand.h
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef PasteCommand_h
#define PasteCommand_h

#include "Command.h"
#include "Document.h"

class PasteCommand: public Command {
public:
    PasteCommand(Document*);
    
    virtual void Execute();
    
private:
    Document* _document;
};

#endif /* PasteCommand_h */
