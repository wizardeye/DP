//
//  Equipment.h
//  CompositePattern
//
//  Created by air seok on 2018. 2. 13..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Equipment_h
#define Equipment_h

typedef double Watt;
typedef double Currency;

class Equipment
{
public:
    virtual ~Equipment() {}
    
    const char* Name() { return _name; }
    
    virtual Watt Power() { return 0.0; }
    virtual Currency NetPrice() { return 0.0; }
    virtual Currency DiscountPrice() { return 0.0; }
    
    virtual void Add(Equipment*) {}
    virtual void Remove(Equipment*) {}
    
protected:
    Equipment(const char* name): _name(name) {}
    
private:
    const char* _name;
};

#endif /* Equipment_h */
