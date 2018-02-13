//
//  WindowSystemFactory.h
//  BridgePattern
//
//  Created by air seok on 2018. 2. 12..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef WindowSystemFactory_h
#define WindowSystemFactory_h

#include "WindowImp.h"

class WindowSystemFactory
{
public:
    static WindowSystemFactory* Instance() {
        if (_factory == nullptr) {
            _factory = new WindowSystemFactory;
        }
        
        return _factory;
    }
    
    WindowImp* MakeWindowImp() {
        return new WindowImp;
    }
    
private:
    WindowSystemFactory* _factory;
};

#endif /* WindowSystemFactory_h */
