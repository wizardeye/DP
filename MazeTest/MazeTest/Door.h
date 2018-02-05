//
//  Door.h
//  MazeApp
//
//  Created by air seok on 2017. 12. 26..
//  Copyright © 2017년 air seok. All rights reserved.
//

#ifndef Door_h
#define Door_h

#include "MapSite.h"
#include "Room.h"

class Door: public MapSite {
public:
    Door(Room* r1, Room* r2): _room1(r1), _room2(r2) {
        _isOpen = false;
    }
    
    Door(const Door& other) {
        _room1 = other._room1;
        _room2 = other._room2;
    }
    
    void Initialize(Room* r1, Room* r2) {
        _room1 = r1;
        _room2 = r2;
    }
    
    Door* Clone() const {
        return new Door(*this);
    }
    
    virtual void Enter() {
        if (_isOpen == false) {
            std::cout << "You opened the door." << std::endl;
            _isOpen = true;
        }
        else {
            std::cout << "You entered in the room." << std::endl;
        }
    }
    
    void closeDoor() {
        std::cout << "You cloesed the door." << std::endl;
        _isOpen = false;
    }
    
    Room* otherSideFrom(Room* from) {
        if (from->getRoomNo() == _room1->getRoomNo()) {
            return _room2;
        }
        else {
            return _room1;
        }
    }
    
private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};


class DoorNeedingSpell: public Door {
public:
    DoorNeedingSpell(Room* r1, Room* r2): Door(r1, r2) {
        std::cout << "This door magic locked. We need a wizardry" << std::endl;
    }
};

#endif /* Door_h */
