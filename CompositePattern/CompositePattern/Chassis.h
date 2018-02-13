//
//  Chassis.h
//  CompositePattern
//
//  Created by air seok on 2018. 2. 13..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Chassis_h
#define Chassis_h

#include "CompositeEquipment.h"

class Chassis: public CompositeEquipment
{
public:
    Chassis(const char* name, Currency price): CompositeEquipment(name) {
        _price = price;
    }
    
    virtual ~Chassis() {}
    
    virtual Watt Power() { return 0.0; }
    
    virtual Currency NetPrice() {
        return CompositeEquipment::NetPrice() + _price;
    }
    
    virtual Currency DiscountPrice() { return 90.0; }
    
private:
    Currency _price;
};

#endif /* Chassis_h */
