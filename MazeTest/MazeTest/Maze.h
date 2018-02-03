//
//  Maze.h
//  MazeApp
//
//  Created by air seok on 2017. 12. 26..
//  Copyright © 2017년 air seok. All rights reserved.
//

#ifndef Maze_h
#define Maze_h

#include "stdafx.h"

class Maze {
public:
//    Maze();
    
    void addRoom(Room* pRoom) {
        _rooms[pRoom->getRoomNo()] = pRoom;
    }
    
    Room* createRoom(int roomNo) const {
        Room* pRoom = new Room(roomNo);
        
        return pRoom;
    }
    
private:
    std::map<int, Room*> _rooms;
};

#endif /* Maze_h */
