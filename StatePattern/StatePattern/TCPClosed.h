//
//  TCPClosed.h
//  StatePattern
//
//  Created by air seok on 2018. 4. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef TCPClosed_h
#define TCPClosed_h

#include "TCPState.h"
class TCPConnection;


class TCPClosed : public TCPState {
public:
    static TCPState* Instance();
    
    virtual void ActiveOpen(TCPConnection*);
    virtual void PassiveOpen(TCPConnection*);
    
private:
    static TCPState* _instance;
};


#endif /* TCPClosed_h */
