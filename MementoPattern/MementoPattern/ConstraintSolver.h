//
//  ConstraintSolver.h
//  MementoPattern
//
//  Created by air seok on 2018. 3. 22..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef ConstraintSolver_h
#define ConstraintSolver_h

#include <list>

class ConstraintSolverMemento;
class Point;

class ConstraintSolver {
public:
    static ConstraintSolver* getInstance() {
        return new ConstraintSolver;
    }
    
    void Solve();
    void AddPoint(Point p);
    
    //  memento util
    ConstraintSolverMemento* CreateMemento();
    void Rollback(ConstraintSolverMemento* memento);    //  memento 를 이용한 상태 복원
    
protected:
    ConstraintSolver();
    
private:
    static ConstraintSolver* _instance;
    std::list<Point> _points;   //  solver's state
};

#endif /* ConstraintSolver_h */
