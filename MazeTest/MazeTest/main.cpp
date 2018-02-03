//
//  main.cpp
//  MazeApp
//
//  Created by air seok on 2017. 12. 26..
//  Copyright © 2017년 air seok. All rights reserved.
//

#include "stdafx.h"

int main(int argc, const char * argv[]) {
//    MazeGame game;
//    MazeFactory* factory = new EnchantedMazeFactory;
//    game.createMaze(*factory);

//    Maze* maze;
    MazeGame game;
    
//    StandardMazeBuilder builder;
//    maze = builder.getMaze();
    
    CountingMazeBuilder builder;
    game.createMaze(builder);
    
    int rooms, doors;
    builder.GetCounts(rooms, doors);
    
    std::cout << "The Maze has " << rooms << " rooms and " << doors << " doors." << std::endl;
    
    return 0;
}



