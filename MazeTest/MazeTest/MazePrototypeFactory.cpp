//
//  MazePrototypeFactory.cpp
//  MazeTest
//
//  Created by seok ki on 2018. 2. 4..
//  Copyright © 2018년 seok ki. All rights reserved.
//

#include "MazePrototypeFactory.h"

Maze* MazePrototypeFactory::MakeMaze() const {
    return new Maze;
}

Room* MazePrototypeFactory::MakeRoom(int r) const {
    return new Room(0);
}

Wall* MazePrototypeFactory::MakeWall() const {
    return _prototypeWall->Clone();
}

Door* MazePrototypeFactory::MakeDoor(Room* r1, Room* r2) const {
    Door* door = _prototypeDoor->Clone();
    door->Initialize(r1, r2);
    return door;
}
