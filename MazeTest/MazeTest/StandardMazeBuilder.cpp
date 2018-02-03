//
//  StandardMazeBuilder.cpp
//  MazeApp
//
//  Created by air seok on 2018. 1. 29..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "StandardMazeBuilder.h"

void StandardMazeBuilder::BuildRoom(int n) {
    if (! _currentMaze->createRoom(n)) {
        Room* room = new Room(n);
        _currentMaze->addRoom(room);
        
        room->SetSide(Direction::NORTH, new Wall);
        room->SetSide(Direction::SOUTH, new Wall);
        room->SetSide(Direction::EAST, new Wall);
        room->SetSide(Direction::WEST, new Wall);
    }
}

void StandardMazeBuilder::BuildDoor(int n1, int n2) {
    Room* r1 = _currentMaze->createRoom(n1);
    Room* r2 = _currentMaze->createRoom(n2);
    Door* d = new Door(r1, r2);
    
    r1->SetSide(CommonWall(r1, r2), d);
    r2->SetSide(CommonWall(r2, r1), d);
}


Direction StandardMazeBuilder::CommonWall(Room *r1, Room *r2) {
    return Direction::WEST;
}
