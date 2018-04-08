//
//  ConstraintSolverMemento.cpp
//  MementoPattern
//
//  Created by air seok on 2018. 3. 29..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "ConstraintSolverMemento.h"
#include "Point.h"

ConstraintSolverMemento::ConstraintSolverMemento(std::list<Point> ps) {
    _state = ps;
}

std::list<Point> ConstraintSolverMemento::GetState() {
    return _state;
}
