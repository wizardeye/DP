//
//  AnalogClock.cpp
//  ObserverPattern
//
//  Created by air seok on 2018. 4. 17..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include "AnalogClock.h"
#include "Subject.h"
#include "ClockTimer.h"

AnalogClock::AnalogClock(ClockTimer* s): Observer() {
    _subject = s;
    s->Attatch(this);
}

AnalogClock::~AnalogClock() {
    _subject->Detatch(this);
}

void AnalogClock::Update(Subject* theChangedSubject) {
    if (theChangedSubject == _subject) {
        Draw();
    }
}

void AnalogClock::Draw() {
    int hour = _subject->GetHour();
    int minute = _subject->GetMinute();
    int second = _subject->GetSecond();
    
    std::cout << "Analog clock show time : " << hour << "h " << minute << "m " << second << "s\n";

}
