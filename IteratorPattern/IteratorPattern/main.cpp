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

int main(int argc, const char * argv[]) {
    std::cout << "run program\n";
    
    std::list<int>* lists;
    lists->push_back(1);
    lists->push_back(2);
    
    ListIterator<int> forward(lists);

//    //  List::Get() not implemented.
//    for (iter.First(); !iter.IsDone(); iter.Next()) {
//        std::cout << "List item : " << iter.CurrentItem() << " ," << std::endl;
//    }
    
    return 0;
}
