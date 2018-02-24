//
//  ImageProxy.h
//  ProxyPattern
//
//  Created by air seok on 2018. 2. 24..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef ImageProxy_h
#define ImageProxy_h

#include "Graphic.h"

class ImageProxy: public Graphic {
public:
    ImageProxy(const char* imageFile);
    virtual ~ImageProxy();
    
    virtual void Draw(const Point& at);
    virtual void HandleMouse(Event& event);
    
    virtual const Point& GetExtent();
    
    virtual void Load(istream& from);
    virtual void Save(ostream& to);
    
protected:
    Image* GetImage();
    
private:
    Image* _image;
    Point* _extent;
    char* _fileName;
};

#endif /* ImageProxy_h */
