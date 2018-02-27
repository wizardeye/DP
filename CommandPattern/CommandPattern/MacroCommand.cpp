//
//  MacroCommand.cpp
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "MacroCommand.h"

void MacroCommand::Execute() {
    for (auto cmd : *_cmds) {
        cmd->Execute();
    }
}
