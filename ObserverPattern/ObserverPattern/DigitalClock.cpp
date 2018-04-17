//
//  DigitalClock.cpp
//  ObserverPattern
//
//  Created by air seok on 2018. 4. 17..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "DigitalClock.h"
#include "ClockTimer.h"
#include <iostream>

DigitalClock::DigitalClock(ClockTimer* s): Observer() {
    _subject = s;
    _subject->Attatch(this);
}

DigitalClock::~DigitalClock() {
    _subject->Detatch(this);
}

void DigitalClock::Update(Subject* theChangedSubject) {
    if (theChangedSubject == _subject) {
        Draw();
    }
}

void DigitalClock::Draw() {
    int hour = _subject->GetHour();
    int minute = _subject->GetMinute();
    int second = _subject->GetSecond();
    
    std::cout << "Digital clock show time : " << hour << "h " << minute << "m " << second << "s\n";
}
