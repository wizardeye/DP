//
//  BombedWall.h
//  MazeTest
//
//  Created by air seok on 2018. 2. 5..
//  Copyright © 2018년 seok ki. All rights reserved.
//

#ifndef BombedWall_h
#define BombedWall_h

#include "Wall.h"

class BombedWall: public Wall
{
public:
    BombedWall(): Wall() {}
    BombedWall(const BombedWall& other): Wall(other) {
        _bomb = other._bomb;
    }
    
    virtual Wall* Clone() const;
    bool hasBomb();
    
private:
    bool _bomb;
};

Wall* BombedWall::Clone() const {
    return new BombedWall(*this);
}

#endif /* BombedWall_h */
