//
//  Subject.h
//  ObserverPattern
//
//  Created by air seok on 2018. 4. 16..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Subject_h
#define Subject_h

#include <list>

class Observer;

class Subject {
public:
    virtual ~Subject() {
        delete _observers;
        _observers = nullptr;
    }
    
    virtual void Attatch(Observer* );
    virtual void Detatch(Observer* );
    virtual void Notify();
    
protected:
    Subject() {
        _observers = new std::list<Observer*>;
    }
    
private:
    std::list<Observer*>* _observers;
};

#endif /* Subject_h */
