//
//  main.cpp
//  MediatorPattern
//
//  Created by air seok on 2018. 3. 12..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "FontDialogDirector.h"
#include "Widget.h"
#include "Button.h"

int main(int argc, const char * argv[]) {
    /// 예제를 mouse event 를 일어나게 해서 해당 버튼 객체가 changed()를 호출하고
    /// Dialog 에 변경이 반영되는 형태로 구현해야 하는데... 귀찮다.
    FontDialogDirector* director = new FontDialogDirector();
    director->PushButton_OK();
    
    return 0;
}
