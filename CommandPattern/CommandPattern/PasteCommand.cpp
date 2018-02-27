//
//  PasteCommand.cpp
//  CommandPattern
//
//  Created by air seok on 2018. 2. 27..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "PasteCommand.h"

PasteCommand::PasteCommand(Document* doc) {
    _document = doc;
}


void PasteCommand::Execute() {
    _document->Paste();
}
