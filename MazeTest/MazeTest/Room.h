//
//  Room.h
//  MazeApp
//
//  Created by air seok on 2017. 12. 26..
//  Copyright © 2017년 air seok. All rights reserved.
//

#ifndef Room_h
#define Room_h

#include "MapSite.h"
#include "Wall.h"
#include "Spell.h"

class Room: public MapSite {
public:
    Room(int roomNo): _roomNo(roomNo) {
        for(auto i=0; i < 4; i++) {
            _sides[i] = new Wall;
        }
    }
    
    int getRoomNo() {
        return _roomNo;
    }
    
    MapSite* GetSide(Direction direction) const {
        return _sides[static_cast<int>(direction)];
    }
    
    void SetSide(Direction direction, MapSite* pSite) {
        _sides[static_cast<int>(direction)] = pSite;
    }
    
    virtual void Enter() {
        std::cout << "You enter the room." << std::endl;
    }
    
private:
    std::array<MapSite*, 4> _sides;
    int _roomNo;
};

class EnchantedRoom: public Room {
public:
    EnchantedRoom(int n, Spell* spell): Room(n) {
        std::cout << "Now I'll make a enchanted room. cast ready!" << std::endl;
        std::cout << "I'm your lord. Dragon!!! shut up!!!" << std::endl;
        spell->castDeathFire();
        spell->castShield();
    }
};

#endif /* Room_h */
