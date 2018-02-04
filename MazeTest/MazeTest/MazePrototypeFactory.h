//
//  MazePrototypeFactory.h
//  MazeTest
//
//  Created by seok ki on 2018. 2. 4..
//  Copyright © 2018년 seok ki. All rights reserved.
//

#ifndef MazePrototypeFactory_h
#define MazePrototypeFactory_h

#include "MazeFactory.h"

class MazePrototypeFactory: public MazeFactory
{
public:
    MazePrototypeFactory(Maze*, Wall*, Room*, Door*);
    
    virtual Maze* MakeMaze() const;
    virtual Room* MakeRoom(int) const;
    virtual Wall* MakeWall() const;
    virtual Door* MakeDoor(Room*, Room*) const;
    
private:
    Maze* _prototypeMaze;
    Room* _prototypeRoom;
    Wall* _prototypeWall;
    Door* _prototypeDoor;
};

#endif /* MazePrototypeFactory_h */
