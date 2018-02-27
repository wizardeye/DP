//
//  Command.h
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Command_h
#define Command_h

class Command {
public:
//    virtual ~Command();
    
    virtual void Execute() = 0;
    
protected:
    Command() {}
};

#endif /* Command_h */
