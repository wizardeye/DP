//
//  StandardMazeBuilder.hpp
//  MazeApp
//
//  Created by air seok on 2018. 1. 29..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef StandardMazeBuilder_h
#define StandardMazeBuilder_h

#include "MazeBuilder.h"
#include "Maze.h"

class StandardMazeBuilder: public MazeBuilder
{
public:
    StandardMazeBuilder() {
        _currentMaze = 0;
    }
    
    virtual void BuildMaze() {
        _currentMaze = new Maze;
    }
    
    virtual void BuildRoom(int);
    
    virtual void BuildDoor(int, int);
    
    virtual Maze* GetMaze() {
        return _currentMaze;
    }
    
private:
    Direction CommonWall(Room*, Room*);
    Maze* _currentMaze;
};


#endif /* StandardMazeBuilder_h */

