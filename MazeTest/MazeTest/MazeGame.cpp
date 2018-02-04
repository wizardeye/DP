//
//  MazeGame.cpp
//  MazeApp
//
//  Created by air seok on 2017. 12. 26..
//  Copyright © 2017년 air seok. All rights reserved.
//

#include "MazeGame.h"
#include "MazeFactory.h"

Maze* MazeGame::createMaze(MazeFactory &factory) {
    Maze* aMaze = factory.makeMaze();
    Room* r1 = factory.makeRoom(1);
    Room* r2 = factory.makeRoom(2);
    Door* aDoor = factory.makeDoor(r1, r2);

    aMaze->addRoom(r1);
    aMaze->addRoom(r2);

    r1->SetSide(Direction::EAST, aDoor);
    r2->SetSide(Direction::WEST, aDoor);

    return aMaze;
}

//  빌더 객체는 factory pattern 과 달리 미로의 내부 표현을 은닉한다.
void MazeGame::createMaze(MazeBuilder &builder) {
    builder.BuildMaze();
    
    builder.BuildRoom(1);
    builder.BuildRoom(2);
    
    builder.BuildDoor(1, 2);
}

void MazeGame::createComplexMaze(MazeBuilder &builder) {
    builder.BuildRoom(1);
    //...
    builder.BuildRoom(1000);
}

Maze* MazeGame::createMaze() {
    Maze* aMaze = makeMaze();
    
    Room* r1 = makeRoom(1);
    Room* r2 = makeRoom(2);
    
    Door* theDoor = makeDoor(r1, r2);
    
    aMaze->addRoom(r1);
    aMaze->addRoom(r2);
    
    r1->SetSide(Direction::NORTH, makeWall());
    r1->SetSide(Direction::EAST, theDoor);
    r1->SetSide(Direction::SOUTH, makeWall());
    r1->SetSide(Direction::WEST, makeWall());
    
    r2->SetSide(Direction::NORTH, makeWall());
    r2->SetSide(Direction::EAST, makeWall());
    r2->SetSide(Direction::SOUTH, makeWall());
    r2->SetSide(Direction::WEST, theDoor);
    
    return aMaze;
}
