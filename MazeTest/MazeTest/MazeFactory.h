//
//  MazeFactory.h
//  MazeApp
//
//  Created by air seok on 2017. 12. 27..
//  Copyright © 2017년 air seok. All rights reserved.
//

#ifndef MazeFactory_h
#define MazeFactory_h

#include "Maze.h"
#include "Wall.h"
#include "Door.h"
#include "Room.h"

class MazeFactory {
public:
    MazeFactory();
    
    virtual Maze* makeMaze() const {
        return new Maze;
    }
    
    virtual Wall* makeWall() const {
        return new Wall;
    }
    
    virtual Room* makeRoom(int n) const {
        return new Room(n);
    }
    
    virtual Door* makeDoor(Room* r1, Room* r2) const {
        return new Door(r1, r2);
    }
};


class EnchantedMazeFactory: public MazeFactory {
public:
    virtual Room* makeRoom(int n) const {
        return new EnchantedRoom(n, castSpell());
    }
    
    virtual Door* makeDoor(Room* r1, Room* r2) const {
        return new DoorNeedingSpell(r1, r2);
    }
    
protected:
    Spell* castSpell() const {
        Spell* pSpell = new Spell;
        return pSpell;
    }
};

#endif /* MazeFactory_h */
