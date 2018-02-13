//
//  Cabinet.h
//  CompositePattern
//
//  Created by air seok on 2018. 2. 13..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Cabinet_h
#define Cabinet_h

#include "CompositeEquipment.h"

class Cabinet: public CompositeEquipment
{
public:
    Cabinet(const char* name, Currency price): CompositeEquipment(name) {
        _price = price;
    }
    
    virtual ~Cabinet() {}
    
    virtual Watt Power() { return 500.0; }
    
    virtual Currency NetPrice() {
        return CompositeEquipment::NetPrice() + _price;
    }
    
    virtual Currency DiscountPrice() { return 900.0; }
    
private:
    Currency _price;
};

#endif /* Cabinet_h */
