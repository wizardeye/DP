//
//  TCPEstabilished.h
//  StatePattern
//
//  Created by air seok on 2018. 4. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef TCPEstabilished_h
#define TCPEstabilished_h

#include "TCPState.h"
class TCPConnection;
class TCPOctetStream;

class TCPEstabilished : public TCPState {
public:
    static TCPState* Instance();
    
    virtual void Transmit(TCPConnection* , TCPOctetStream* o);
    virtual void Close(TCPConnection* t);
    
private:
    static TCPState* _instance;
};

#endif /* TCPEstabilished_h */
