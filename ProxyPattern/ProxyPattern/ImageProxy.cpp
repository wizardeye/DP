//
//  ImageProxy.cpp
//  ProxyPattern
//
//  Created by air seok on 2018. 2. 24..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include "ImageProxy.h"
#include "Image.h"

ImageProxy::ImageProxy(const char* fileName) {
    _fileName = strdup(fileName);
    _image = nullptr;
}

Image* ImageProxy::GetImage() {
    if (_image == nullptr) {
//        _image = new Image(_fileName);
    }
    
    return _image;
}

const Point& ImageProxy::GetExtent() {
    if (_extent == nullptr) {
        _extent = GetImage()->GetExtent();
    }
    
    return *_extent;
}

void ImageProxy::Draw(const Point &at) {
    GetImage()->Draw(at);
}

void ImageProxy::HandleMouse(Event &event) {
    GetImage()->HandleMouse(event);
}

void ImageProxy::Save(std::ostream& to) {
    to << _extent << _fileName;
}

void ImageProxy::Load(std::istream& from) {
    from >> _fileName;  //  _extent ???
}
