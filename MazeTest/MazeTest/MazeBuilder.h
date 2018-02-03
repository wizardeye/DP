//
//  MazeBuilder.hpp
//  MazeApp
//
//  Created by air seok on 2018. 1. 29..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef MazeBuilder_h
#define MazeBuilder_h

#include "stdafx.h"

//  미로 자체를 만들지 않고 미로를 생성하는 인터페이스를 정의한다.
class MazeBuilder {
public:
    virtual void BuildMaze() {}
    virtual void BuildRoom(int room) {}
    virtual void BuildDoor(int roomFrom, int roomTo) {}
    
    virtual Maze* GetMaze() { return 0; }
    
protected:
    MazeBuilder() {}
};

#endif /* MazeBuilder_h */
