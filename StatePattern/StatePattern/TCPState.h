
//  TCPState.h
//  StatePattern
//
//  Created by air seok on 2018. 4. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef TCPState_h
#define TCPState_h

class TCPConnection;
class TCPOctetStream;

class TCPState {
public:
    virtual void Transmit(TCPConnection* , TCPOctetStream* );
    virtual void ActiveOpen(TCPConnection* );
    virtual void PassiveOpen(TCPConnection* );
    virtual void Close(TCPConnection* );
    virtual void Synchronize(TCPConnection* );
    virtual void Acknowledge(TCPConnection* );
    virtual void Send(TCPConnection* );
    
protected:
    void ChangeState(TCPConnection* c, TCPState* t);
};


#endif /* TCPState_h */
