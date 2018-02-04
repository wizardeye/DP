//
//  CountingMazeBuilder.h
//  MazeApp
//
//  Created by air seok on 2018. 1. 30..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef CountingMazeBuilder_h
#define CountingMazeBuilder_h

#include "MazeBuilder.h"

class CountingMazeBuilder: public MazeBuilder
{
public:
    CountingMazeBuilder();
    
    virtual void BuildMaze();
    virtual void BuildRoom(int);
    virtual void BuildDoor(int, int);
//    virtual void AddWall(int, Direction);
    
    void GetCounts(int&, int&) const;
    
private:
    int _doors;
    int _rooms;
};

#endif /* CountingMazeBuilder_h */
