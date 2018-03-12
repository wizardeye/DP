//
//  ListIterator.cpp
//  IteratorPattern
//
//  Created by air seok on 2018. 3. 5..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "ListIterator.h"
#include <iostream>

class IteratorOutOfBounds {
public:
    IteratorOutOfBounds(int Code): _Code(Code) {}
    
    int _Code;
};

ListIterator::ListIterator(const std::list<int>* aList): Iterator() {
    _list = aList;
    _current = 0;
}


void ListIterator::First() {
    _current = 0;
}


void ListIterator::Next() {
    _current++;
}


bool ListIterator::IsDone() const {
    return _current >= _list->size();
}


int ListIterator::CurrentItem() const {
    try {
        if (IsDone())
            throw IteratorOutOfBounds(7);
    }
    catch (IteratorOutOfBounds &e) {
        std::cout << "IteratorOutOfBounds: " << e._Code << std::endl;
    }

    //  custom List must support to access List's elements
    return _list->front();  //  _list->Get(_current);
}


//template <class Item>
//ListIterator<Item>::ListIterator(const std::list<Item>* aList): Iterator<Item>() {
//    _list = aList;
//    _current = 0;
//}
//
//template <class Item>
//void ListIterator<Item>::First() {
//    _current = 0;
//}
//
//template <class Item>
//void ListIterator<Item>::Next() {
//    _current++;
//}
//
//template <class Item>
//bool ListIterator<Item>::IsDone() const {
//    return _current >= _list->size();
//}
//
//template <class Item>
//Item ListIterator<Item>::CurrentItem() const {
//    try {
//        if (IsDone())
//            throw IteratorOutOfBounds(7);
//    }
//    catch (IteratorOutOfBounds &e) {
//        std::cout << "IteratorOutOfBounds: " << e._Code << std::endl;
//    }
//
//    //  custom List must support to access List's elements
//    return _list->front();  //  _list->Get(_current);
//}

