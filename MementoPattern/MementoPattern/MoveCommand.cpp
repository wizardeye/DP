//
//  MoveCommand.cpp
//  MementoPattern
//
//  Created by air seok on 2018. 3. 22..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "MoveCommand.h"
#include "ConstraintSolver.h"
#include "ConstraintSolverMemento.h"
#include "Point.h"
#include <iostream>

MoveCommand::MoveCommand() {}

void MoveCommand::Do() {
    std::cout << "Do action...\n";
    ConstraintSolver* s = ConstraintSolver::getInstance();
    s->AddPoint(Point(1.0 ,9.9));
    s->AddPoint(Point(2.0, 8.9));
    s->AddPoint(Point(3.0, 7.9));
    
    //  backup
    _state = s->CreateMemento();
    std::cout << "restore point set by memento.\n";
    
    s->AddPoint(Point(4.0, 6.9));
    s->AddPoint(Point(5.0, 5.8));
}

void MoveCommand::Undo() {
    std::cout << "Undo action...\n";
    ConstraintSolver* s = ConstraintSolver::getInstance();
    s->Rollback(_state);
}
