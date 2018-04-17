//
//  AnalogClock.h
//  ObserverPattern
//
//  Created by air seok on 2018. 4. 17..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef AnalogClock_h
#define AnalogClock_h

#include "Observer.h"

class Subject;
class ClockTimer;

class AnalogClock : public Observer {
public:
    AnalogClock(ClockTimer* );
    ~AnalogClock();
    
    virtual void Update(Subject* );
    virtual void Draw();
    
private:
    ClockTimer* _subject;
};

#endif /* AnalogClock_h */
