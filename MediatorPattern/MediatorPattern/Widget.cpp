//
//  Widget.cpp
//  MediatorPattern
//
//  Created by air seok on 2018. 3. 13..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "Widget.h"
#include <iostream>

void Widget::Changed(Widget* w) {
    _director->WidgetChanged(w);
}

