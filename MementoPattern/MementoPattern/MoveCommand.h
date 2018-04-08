//
//  MoveCommand.h
//  MementoPattern
//
//  Created by air seok on 2018. 3. 22..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef MoveCommand_h
#define MoveCommand_h

class ConstraintSolverMemento;

class MoveCommand {
public:
    MoveCommand();  //  사용자가 이동 연산을 요청하면 solver 상태를 백업한 memento 반환
    
    void Do();     //  사용자 액션
    void Undo();   //  사용자 액션 취소
    
private:
    ConstraintSolverMemento* _state;
};

#endif /* MoveCommand_h */
