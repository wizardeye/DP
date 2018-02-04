//
//  Spell.h
//  MazeApp
//
//  Created by air seok on 2017. 12. 27..
//  Copyright © 2017년 air seok. All rights reserved.
//

#ifndef Spell_h
#define Spell_h


class Spell {
public:
    Spell() {
        std::cout << "spell 을 초기화 합니다." << std::endl;
    }
    
    void castDeathFire() {
        std::cout << "ooh~~~~~ Fire ball!!!" << std::endl;
    }
    
    void castShield() {
        std::cout << "magic shield barrier!!! hoo... We are safe." << std::endl;
    }
};

#endif /* Spell_h */
