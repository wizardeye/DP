//
//  FontDialogDirector.h
//  MediatorPattern
//
//  Created by air seok on 2018. 3. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef FontDialogDirector_h
#define FontDialogDirector_h

#include "DialogDirector.h"
#include "Button.h"
#include "ListBox.h"
#include "EntryField.h"

class FontDialogDirector: public DialogDirector {
public:
    FontDialogDirector(): DialogDirector() {
        CreateWidget();
    }
    virtual ~FontDialogDirector() {
        DeleteWidget();
    }
    virtual void WidgetChanged(Widget*);
    
    void PushButton_OK();
    
protected:
    virtual void CreateWidget();
    void DeleteWidget();
    
private:
    Button* _ok;
    Button* _cancel;
    ListBox* _fontList;
    EntryField* _fontName;
};

#endif /* FontDialogDirector_h */
