//
//  Iterator.h
//  IteratorPattern
//
//  Created by air seok on 2018. 3. 5..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Iterator_h
#define Iterator_h

template <class Item>
class Iterator {
public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual Item CurrentItem() const = 0;
    
protected:
    Iterator();
};

template <class Item>
Iterator<Item>::Iterator() {}

#endif /* Iterator_h */
