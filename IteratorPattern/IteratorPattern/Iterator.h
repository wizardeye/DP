//
//  Iterator.h
//  IteratorPattern
//
//  Created by air seok on 2018. 3. 5..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Iterator_h
#define Iterator_h

//class Item {
//public:
//    Item(int n): _n(n) {}
//
//private:
//    int _n;
//};

//template <class Item>
class Iterator {
public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual int CurrentItem() const = 0;
    
protected:
    Iterator() {}
};

#endif /* Iterator_h */
