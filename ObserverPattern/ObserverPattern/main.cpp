//
//  main.cpp
//  ObserverPattern
//
//  Created by air seok on 2018. 4. 16..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include "ClockTimer.h"
#include "DigitalClock.h"
#include "AnalogClock.h"

int main(int argc, const char * argv[]) {
    ClockTimer* timer = new ClockTimer;
    AnalogClock* analogClock = new AnalogClock(timer);
    DigitalClock* digitalClock = new DigitalClock(timer);
    
    timer->Tick();
    
    return 0;
}
