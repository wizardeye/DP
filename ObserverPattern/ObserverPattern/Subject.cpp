//
//  Subject.cpp
//  ObserverPattern
//
//  Created by air seok on 2018. 4. 16..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <stdio.h>
#include "Subject.h"
#include "Observer.h"

void Subject::Attatch(Observer* o) {
    _observers->push_back(o);
}

void Subject::Detatch(Observer* o) {
    _observers->remove(o);
}

void Subject::Notify() {
    for (auto o : *_observers) {
        o->Update(this);
    }
}
