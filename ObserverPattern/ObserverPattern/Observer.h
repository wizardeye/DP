//
//  Observer.h
//  ObserverPattern
//
//  Created by air seok on 2018. 4. 16..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Observer_h
#define Observer_h

class Subject;

class Observer {
public:
    virtual ~Observer() {}
    virtual void Update(Subject* theChangedSubject) = 0;
    
protected:
    Observer() {}
};

#endif /* Observer_h */
