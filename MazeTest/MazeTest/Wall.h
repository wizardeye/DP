//
//  Wall.h
//  MazeApp
//
//  Created by air seok on 2017. 12. 26..
//  Copyright © 2017년 air seok. All rights reserved.
//

#ifndef Wall_h
#define Wall_h

#include <iostream>
#include "MapSite.h"

class Wall: public MapSite {
public:
    Wall() {}
    Wall(const Wall&);
    
    virtual void Initialize(Wall*);
    virtual Wall* Clone() const;
    
    virtual void Enter() {
        std::cout << "You are standing against the wall." << std::endl;
    }
    
private:
    Wall* _wall;
};

#endif /* Wall_h */
