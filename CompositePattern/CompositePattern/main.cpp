//
//  main.cpp
//  CompositePattern
//
//  Created by air seok on 2018. 2. 13..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include "FloppyDisk.h"
#include "Chassis.h"
#include "Cabinet.h"

int main(int argc, const char * argv[]) {
    Cabinet* cabinet = new Cabinet("Alien 808", 1000.0);
    Chassis* chassis = new Chassis("PC Shassis", 128.5);
    
    cabinet->Add(chassis);
    std::cout << cabinet->Name() << "'s price : " << cabinet->NetPrice() << std::endl;
    
    FloppyDisk* floppy = new FloppyDisk("floppy disk", 125.0);
    std::cout << floppy->Name() << "'s price : " << floppy->NetPrice() << std::endl;
    
    return 0;
}
