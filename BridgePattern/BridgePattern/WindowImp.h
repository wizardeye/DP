//
//  WindowImp.h
//  BridgePattern
//
//  Created by air seok on 2018. 2. 8..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef WindowImp_h
#define WindowImp_h

#include <math>
#inlcude <algorithm>
#include <stdlib>
#include "Window.h"

class Coord;

class WindowImp
{
public:
    virtual void ImpTop() = 0;
    virtual void ImpBottom() = 0;
    virtual void ImpSetExtent(const Point&) = 0;
    virtual void ImpSetOrigin(const Point&) = 0;
    
    virtual void DeviceRect(Coord, Coord, Coord, Coord) = 0;
    virtual void DeviceText(const char*, Coord, Coord) = 0;
    virtual void DeviceBitmap(const char*, Coord, Coord) = 0;
    
    virtual void DrawOn(Window*) = 0;
    
protected:
    WindowImp();
};

class Display;
class Drawable;
class GC;
class HPS;
class PPOINTL;

class XWindowImp: public WindowImp
{
public:
    XWindowImp();
    
    virtual void DeviceRect(Coord x0, Coord y0, Coord x1, Coord y1) {
        int x = round(min(x0, x1));
        int y = round(min(y0, y1));
        int w = round(abs(x0 - x1));
        int h = round(abs(y0 - y1));
        XDrawRectangle(_dpy, _winid, _gc, x, y, w, h);
    }
    
    virtual void DrawOn(Window* w) {}
    
private:
    Display* _dpy;
    Drawable _winid;
    GC _gc;
};

class PMWindowImp: public WindowImp
{
public:
    PMWindowImp();
    
    virtual void DeviceRect(Coord x0, Coord y0, Coord x1, Coord y1) {
        Coord left = min(x0, x1);
        Coord right = max(x0, x1);
        Coord bottom = min(y0, y1);
        Coord top = max(y0, y1);
        
        PPOINTL point[4];
        
        point[0].x = left;  point[0].y = top;
        point[1].x = right; point[1].y = top;
        point[2].x = right; point[2].y = bottom;
        point[3].x = left;  point[3].y = bottom;
        
        if (
            (GpiBeginPath(_hps, 1L) == false) ||
            (GpiSetCurrentPosition(_hps, &point[3]) == false) ||
            (GpiPolyLine(_hps, 4L, point) == GPI_ERROR) ||
            (GpiEndPath(_hps) == false)
            ) {
            //  error report
        } else {
            GpiStrokePath(_hps, 1L, 0L);
        }
    }
    
    virtual void DrawOn(Window* w) {}
    
private:
    HPS _hps;
}


#endif /* WindowImp_h */
