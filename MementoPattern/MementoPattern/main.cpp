//
//  main.cpp
//  MementoPattern
//
//  Created by air seok on 2018. 3. 22..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include "MoveCommand.h"

int main(int argc, const char * argv[]) {
    MoveCommand cmd;
    cmd.Do();       //  set state using by memento
    cmd.Undo();     //  restore state
    
    return 0;
}
