//
//  CountingMazeBuilder.cpp
//  MazeApp
//
//  Created by air seok on 2018. 1. 30..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "CountingMazeBuilder.h"

CountingMazeBuilder::CountingMazeBuilder() {
    _rooms = _doors = 0;
}

void CountingMazeBuilder::BuildMaze() {
    
}

void CountingMazeBuilder::BuildRoom(int) {
    _rooms++;
}

void CountingMazeBuilder::BuildDoor(int, int) {
    _doors++;
}

void CountingMazeBuilder::GetCounts(int &rooms, int &doors) const {
    rooms = _rooms;
    doors = _doors;
}
