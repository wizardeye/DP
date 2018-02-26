//
//  main.cpp
//  ChainOfResponsibility
//
//  Created by air seok on 2018. 2. 26..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include "Application.h"
#include "Dialog.h"
#include "Button.h"

int main(int argc, const char * argv[]) {
    const Topic PRINT_TOPIC = 1;
    const Topic PAPER_ORIENTATION_TOPIC = 2;
    const Topic APPLICATION_TOPIC = 3;
    
    Application* application = new Application(APPLICATION_TOPIC);
    Dialog* dialog = new Dialog(application, PRINT_TOPIC);
    Button* button = new Button(dialog, PAPER_ORIENTATION_TOPIC);
    
    button->HandleHelp();
    dialog->HandleHelp();
    application->HandleHelp();
    
    return 0;
}
