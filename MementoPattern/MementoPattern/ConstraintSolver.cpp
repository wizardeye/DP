//
//  ConstraintSolver.cpp
//  MementoPattern
//
//  Created by air seok on 2018. 3. 23..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include "ConstraintSolver.h"
#include "ConstraintSolverMemento.h"
#include "Point.h"

ConstraintSolver::ConstraintSolver() {
    _points.clear();
}

void ConstraintSolver::Solve() {
    std::cout << "point problem solving...\n";
}

ConstraintSolverMemento* ConstraintSolver::CreateMemento() {
    return new ConstraintSolverMemento(_points);
}

void ConstraintSolver::Rollback(ConstraintSolverMemento *m) {
    _points = m->GetState();
    std::cout << "solver size is " << _points.size() << std::endl;
    std::cout << "solver rollback!\n";
}

void ConstraintSolver::AddPoint(Point p) {
    _points.push_back(p);
    std::cout << "point add\n";
    std::cout << "solver size is " << _points.size() << std::endl;
}
