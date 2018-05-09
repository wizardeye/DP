//
//  TCPClosed.cpp
//  StatePattern
//
//  Created by air seok on 2018. 4. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <stdio.h>
#include "TCPConnection.h"
#include "TCPClosed.h"
#include "TCPEstabilished.h"
#include "TCPListen.h"

TCPState* TCPClosed::_instance = nullptr;

TCPState* TCPClosed::Instance() {
    if (!_instance) {
        _instance = new TCPClosed;
    }
    
    return _instance;
}

void TCPClosed::ActiveOpen(TCPConnection* t) {
    printf("[Close] send SYN, receive SYN, ACK, etc.\n");
    
    ChangeState(t, TCPEstabilished::Instance());
}

void TCPClosed::PassiveOpen(TCPConnection *t) {
    printf("[Close] Passive Open\n");
    
    ChangeState(t, TCPListen::Instance());
}

