//
//  TCPListen.h
//  StatePattern
//
//  Created by air seok on 2018. 4. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef TCPListen_h
#define TCPListen_h

#include "TCPState.h"
class TCPConnection;

class TCPListen : public TCPState {
public:
    
    static TCPState* Instance();
    
    virtual void Send(TCPConnection* );
    virtual void Close(TCPConnection* );
    
private:
    static TCPState* _instance;
};

#endif /* TCPListen_h */
