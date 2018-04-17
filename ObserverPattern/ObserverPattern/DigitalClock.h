//
//  DigitalClock.h
//  ObserverPattern
//
//  Created by air seok on 2018. 4. 17..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef DigitalClock_h
#define DigitalClock_h

#include "Observer.h"

class Subject;
class ClockTimer;

class DigitalClock : public Observer {
public:
    DigitalClock(ClockTimer* );
    virtual ~DigitalClock();
    
    virtual void Update(Subject* );
    virtual void Draw();
    
private:
    ClockTimer* _subject;
};

#endif /* DigitalClock_h */
