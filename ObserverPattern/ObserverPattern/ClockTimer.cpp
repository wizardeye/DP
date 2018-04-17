//
//  ClockTimer.cpp
//  ObserverPattern
//
//  Created by air seok on 2018. 4. 17..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "ClockTimer.h"
#include <iostream>
#include <ctime>

void ClockTimer::Tick() {
    std::cout << "시간 상태를 변경합니다.\n";
    time_t currentTime;
    auto t = localtime(&currentTime);
    
    _hour = t->tm_hour;
    _minute = t->tm_min;
    _second = t->tm_sec;
    
    Notify();
}

int ClockTimer::GetHour() {
    return _hour;
}

int ClockTimer::GetMinute() {
    return _minute;
}

int ClockTimer::GetSecond() {
    return _second;
}


