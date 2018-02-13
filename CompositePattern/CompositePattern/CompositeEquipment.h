//
//  CompositeEquipment.h
//  CompositePattern
//
//  Created by air seok on 2018. 2. 13..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef CompositeEquipment_h
#define CompositeEquipment_h

#include "Equipment.h"
#include <list>

class CompositeEquipment: public Equipment
{
public:
    virtual ~CompositeEquipment() {}
    
    virtual Watt Power() { return 0.0; }
    virtual Currency NetPrice();
    virtual Currency DiscountPrice() { return 0.0; }
    
    virtual void Add(Equipment*);
    
    virtual void Remove(Equipment*) {}
    
protected:
    CompositeEquipment(const char* name): Equipment(name) {}
    
private:
    std::list<Equipment*> _equipments;
};


Currency CompositeEquipment::NetPrice() {
    Currency price = 0.0;
    
    for (auto i : _equipments) {
        price += i->NetPrice();
    }
    
    return price;
}


void CompositeEquipment::Add(Equipment* e) {
    _equipments.push_back(e);
}

#endif /* CompositeEquipment_h */
