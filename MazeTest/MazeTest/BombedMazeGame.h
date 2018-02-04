//
//  BombedMazeGame.h
//  MazeTest
//
//  Created by seok ki on 2018. 2. 3..
//  Copyright © 2018년 seok ki. All rights reserved.
//

#ifndef BombedMazeGame_h
#define BombedMazeGame_h

#include "Wall.h"
#include "Room.h"
#include "MazeGame.h"

class BombedWall: public Wall {};

class RoomWithBomb: public Room
{
public:
    RoomWithBomb(int n): Room(n) {}
};

class BombedMazeGame: public MazeGame
{
public:
    BombedMazeGame() {}
    
    virtual Wall* MakeWall() const { return new BombedWall; }
    
    virtual Room* MakeRoom(int n) const { return new RoomWithBomb(n); }
};


#endif /* BombedMazeGame_h */
