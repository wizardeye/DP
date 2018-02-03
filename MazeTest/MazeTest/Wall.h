//
//  Wall.h
//  MazeApp
//
//  Created by air seok on 2017. 12. 26..
//  Copyright © 2017년 air seok. All rights reserved.
//

#ifndef Wall_h
#define Wall_h

#include "stdafx.h"

class Wall: public MapSite {
public:
//    Wall();
    
    virtual void Enter() {
        std::cout << "You are standing against the wall." << std::endl;
    }
};

#endif /* Wall_h */
