//
//  OpenCommand.cpp
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "OpenCommand.h"

OpenCommand::OpenCommand(Application* a) {
    _application = a;
}


const char* OpenCommand::AskUser() {
    return "user";
}


void OpenCommand::Execute() {
    const char* name = AskUser();
    
    if (name != nullptr) {
        Document* doc = new Document(name);
        _application->Add(doc);
        doc->Open();
    }
}
