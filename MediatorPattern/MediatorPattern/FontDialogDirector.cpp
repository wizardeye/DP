//
//  FontDialogDirector.cpp
//  MediatorPattern
//
//  Created by air seok on 2018. 3. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "FontDialogDirector.h"
#include "Widget.h"
#include <iostream>

void FontDialogDirector::CreateWidget() {
    _ok = new Button(this);
    _cancel = new Button(this);
    _fontList = new ListBox(this);
    _fontName = new EntryField(this);
}

void FontDialogDirector::DeleteWidget() {
    delete _ok;
    delete _cancel;
    delete _fontList;
    delete _fontName;
    
    _ok = nullptr;
    _cancel = nullptr;
    _fontList = nullptr;
    _fontName = nullptr;
}

void FontDialogDirector::WidgetChanged(Widget* w) {
    if (w == _fontList) {
        _fontName->SetText(_fontList->GetSelection());
    } else if (w == _ok) {
        std::cout << _fontName->GetText() << std::endl;
    } else {
        std::cout << "none select...\n";
    }
}

void FontDialogDirector::PushButton_OK() {
    std::cout << "button OK pushed.\n";
    _ok->Changed(_ok);
}
