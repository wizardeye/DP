//
//  ConstraintSolverMemento.h
//  MementoPattern
//
//  Created by air seok on 2018. 3. 22..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef ConstraintSolverMemento_h
#define ConstraintSolverMemento_h

#include "ConstraintSolver.h"
#include "ConstraintSolverMemento.h"
#include <list>

class Point;

class ConstraintSolverMemento {
public:
    virtual ~ConstraintSolverMemento() {}
    std::list<Point> GetState();
//    void SetState(std::list<Point> state);
    
private:
    friend class ConstraintSolver;
    std::list<Point> _state;
    
    ConstraintSolverMemento(std::list<Point> ps);
};

#endif /* ConstraintSolverMemento_h */
