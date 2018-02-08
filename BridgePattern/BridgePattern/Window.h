//
//  Window.h
//  BridgePattern
//
//  Created by air seok on 2018. 2. 8..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Window_h
#define Window_h

#include "WindowImp.h"

class View;
class Point;

class Window
{
public:
    Window(View* contents);
    
    virtual void Open();
    virtual void Close();
    virtual void Iconify();
    virtual void Deiconify();
    
    virtual void SetOrigin(const Point& at);
    virtual void SetExtent(const Point& extent);
    virtual void Raise();
    virtual void Lower();
    
    virtual void DrawLine(const Point&, const Point&);
    virtual void DrawRect(const Point&, const Point&);
    virtual void DrawPolygon(const Point[], int n);
    virtual void DrawText(const char*, const Point&);
    
protected:
    WindowImp* GetWindowImp() {
        if (_imp == nullptr) {
            _imp = WindowSystemFactory::Instance()->MakeWindowImp();
        }
        
        return _imp;
    }
    
    View* GetView();
    
private:
    WindowImp* _imp;
    View* _contents;
};


class ApplicationWindow: public Window
{
public:
    virtual void DrawContents() {
        GetView()->DrawOn(this);
    }
    
    virtual void DrawRect(const Point& p1, const Point& p2) {
        WindowImp* imp = GetWindowImp();
        imp->DeviceRect(p1.X(), p1.Y(), p2.X(), p2.Y());
    }
};


class IconWindow: public Window
{
public:
    virtual void DrawContents() {
        WindowImp* imp = GetWindowImp();
        
        if (imp != nullptr) {
            imp->DeviceBitmap(_bitmapName, 0.0, 0.0);
        }
    }
    
private:
    const char* _bitmapName;
};

#endif /* Window_h */
