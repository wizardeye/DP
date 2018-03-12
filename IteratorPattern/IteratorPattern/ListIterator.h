//
//  ListIterator.h
//  IteratorPattern
//
//  Created by air seok on 2018. 3. 5..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef ListIterator_h
#define ListIterator_h

#include "Iterator.h"
#include <list>

class ListIterator: public Iterator {
public:
    ListIterator(const std::list<int>* aList);
    virtual void First();
    virtual void Next();
    virtual bool IsDone() const;
    virtual int CurrentItem() const;
    
private:
    const std::list<int>* _list;
    long _current;
};


//template <class Item>
//class ListIterator: public Iterator<Item> {
//public:
//    ListIterator(const std::list<Item>* aList);
//    virtual void First();
//    virtual void Next();
//    virtual bool IsDone() const;
//    virtual Item CurrentItem() const;
//
//private:
//    std::list<Item>* _list;
//    long _current;
//};

#endif /* ListIterator_h */
