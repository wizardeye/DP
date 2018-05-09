//
//  TCPConnection.h
//  StatePattern
//
//  Created by air seok on 2018. 4. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef TCPConnection_h
#define TCPConnection_h

class TCPOctetStream;
class TCPState;

class TCPConnection {
public:
    TCPConnection();
    
    void ActiveOpen();
    void PassiveOpen();
    void Close();
    void Acknowledge();
    void Synchronize();
    
    void ProcessOctet(TCPOctetStream* );
    
private:
    friend class TCPState;
    void ChangeState(TCPState* );
    
    TCPState* _state;
};


#endif /* TCPConnection_h */
