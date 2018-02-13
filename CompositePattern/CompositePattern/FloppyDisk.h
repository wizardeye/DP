//
//  FloppyDisk.h
//  CompositePattern
//
//  Created by air seok on 2018. 2. 13..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef FloppyDisk_h
#define FloppyDisk_h

#include "Equipment.h"

class FloppyDisk: public Equipment
{
public:
    FloppyDisk(const char* name, Currency price): Equipment(name) {
        _price = price;
    }
    
    virtual ~FloppyDisk() {}
    
    virtual Watt Power() { return 10.0; }
    virtual Currency NetPrice() { return _price; }
    virtual Currency DiscountPrice() { return 110.0; }
    
private:
    Currency _price;
};

#endif /* FloppyDisk_h */
