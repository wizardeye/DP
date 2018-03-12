//
//  main.cpp
//  IteratorPattern
//
//  Created by air seok on 2018. 3. 5..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include <list>
#include "ListIterator.h"

//class TestItem {
//public:
//    TestItem(int n): _n(n) {}
//
//private:
//    int _n;
//};

int main(int argc, const char * argv[]) {
    std::cout << "run program\n";
    
    std::list<int> lists = {1,2,3,4,5};
    const std::list<int> *pLists = &lists;
    ListIterator iter(pLists);
    
    //  List::Get() not implemented.
    for (iter.First(); !iter.IsDone(); iter.Next()) {
        std::cout << "List item : " << iter.CurrentItem() << " ," << std::endl;
    }
    
    return 0;
}
