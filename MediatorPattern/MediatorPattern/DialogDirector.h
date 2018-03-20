//
//  DialogDirector.h
//  MediatorPattern
//
//  Created by air seok on 2018. 3. 12..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef DialogDirector_h
#define DialogDirector_h

class Widget;

class DialogDirector {
public:
    virtual ~DialogDirector() {}
    
    virtual void ShowDialog() {}
    virtual void WidgetChanged(Widget*) = 0;
    
protected:
    DialogDirector() {}
    virtual void CreateWidget() = 0;
};

#endif /* DialogDirector_h */
