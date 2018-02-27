//
//  SimpleCommand.h
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef SimpleCommand_h
#define SimpleCommand_h

#include "Command.h"

template <class T>
class SimpleCommand: public Command {
public:
    //  Receiver's member function pointer is "Action" (empty arg, void return)
    typedef void (T::* Action)();
    SimpleCommand(T* r, Action a): _receiver(r), _action(a) {}
    
    virtual void Execute();
    
private:
    Action _action;
    T* _receiver;
};

template <class Receiver>
void SimpleCommand<Receiver>::Execute() {
    (_receiver->*_action)();
}

#endif /* SimpleCommand_h */
