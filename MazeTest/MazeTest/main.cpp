//
//  main.cpp
//  MazeApp
//
//  Created by air seok on 2017. 12. 26..
//  Copyright © 2017년 air seok. All rights reserved.
//

#include <iostream>
#include "MazeGame.h"
#include "CountingMazeBuilder.h"
#include "MazePrototypeFactory.h"
#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"
#include "BombedWall.h"

int main(int argc, const char * argv[]) {
//    MazeGame game;
//    MazeFactory* factory = new EnchantedMazeFactory;
//    game.createMaze(*factory);

//    Maze* maze;
    MazeGame game;
    
//    StandardMazeBuilder builder;
//    maze = builder.getMaze();
    
//    CountingMazeBuilder builder;
//    game.createMaze(builder);
//
//    int rooms, doors;
//    builder.GetCounts(rooms, doors);

    MazePrototypeFactory simpleMazeFactory(new Maze, new BombedWall, new Room(0), new Door(new Room(1), new Room(2)));
    
//    std::cout << "The Maze has " << rooms << " rooms and " << doors << " doors." << std::endl;
    
    return 0;
}



