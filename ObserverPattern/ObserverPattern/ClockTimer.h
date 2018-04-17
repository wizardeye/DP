//
//  ClockTimer.h
//  ObserverPattern
//
//  Created by air seok on 2018. 4. 17..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef ClockTimer_h
#define ClockTimer_h

#include "Subject.h"

class ClockTimer : public Subject {
public:
    ClockTimer(): Subject() {}
    
    virtual int GetHour();
    virtual int GetMinute();
    virtual int GetSecond();
    
    void Tick();
    
private:
    int _hour;
    int _minute;
    int _second;
};

#endif /* ClockTimer_h */
