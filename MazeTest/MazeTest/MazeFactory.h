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
    static MazeFactory* Instance();
    
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
    
protected:
    MazeFactory() {}
    
private:
    const char* getenv(const char* s) {
        return s;
    }
    
    static MazeFactory* _instance;
};

MazeFactory* MazeFactory::_instance = nullptr;

class BombedMazeFactory: public MazeFactory {};

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


MazeFactory* MazeFactory::Instance() {
    if (_instance == nullptr) {
        const char* mazeStyle = "MAZESTYLE";
        
        if (strcmp(mazeStyle, "bombed") == 0) {
            _instance = new BombedMazeFactory;
        } else if (strcmp(mazeStyle, "enchanted") == 0) {
            _instance = new EnchantedMazeFactory;
        }
        
        _instance = new MazeFactory;
    }
    
    return _instance;
}
#endif /* MazeFactory_h */
