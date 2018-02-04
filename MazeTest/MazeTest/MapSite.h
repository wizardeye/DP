//
//  MapSite.h
//  MazeApp
//
//  Created by air seok on 2017. 12. 26..
//  Copyright © 2017년 air seok. All rights reserved.
//

#ifndef MapSite_h
#define MapSite_h

#include <array>

enum class Direction {
    NORTH = 0,
    SOUTH,
    EAST,
    WEST
};

const std::array<Direction, 4> all_Direction = {Direction::NORTH, Direction::SOUTH, Direction::EAST, Direction::WEST};

class MapSite {
public:
    virtual void Enter() = 0;
};

#endif /* MapSite_h */
