//
//  MazeGame.h
//  MazeApp
//
//  Created by air seok on 2017. 12. 26..
//  Copyright © 2017년 air seok. All rights reserved.
//

#ifndef MazeGame_h
#define MazeGame_h

#include "stdafx.h"

class MazeGame {
public:
    MazeGame() {
        std::cout << "Welcom to maze game :)" << std::endl;
    }
    
    //  abstract factory
    Maze* createMaze(MazeFactory& factory);
    
    //  builder
    void createMaze(MazeBuilder& builder);
    
    void createComplexMaze(MazeBuilder& builder);
    
    //  factory
    Maze* createMaze();
    
    virtual Maze* makeMaze() const {
        return new Maze;
    }
    
    virtual Room* makeRoom(int n) const {
        return new Room(n);
    }
    
    virtual Wall* makeWall() const {
        return new Wall;
    }
    
    virtual Door* makeDoor(Room* r1, Room* r2) const {
        return new Door(r1, r2);
    }
};


#endif /* MazeGame_h */
