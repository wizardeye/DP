//
//  TCPListen.cpp
//  StatePattern
//
//  Created by air seok on 2018. 4. 20..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <stdio.h>
#include "TCPConnection.h"
#include "TCPListen.h"
#include "TCPEstabilished.h"
#include "TCPClosed.h"

TCPState* TCPListen::_instance = nullptr;

TCPState* TCPListen::Instance() {
    if (!_instance) {
        _instance = new TCPListen;
    }
    
    return _instance;
}

void TCPListen::Send(TCPConnection *t) {
    printf("[Listen] Send\n");
    ChangeState(t, TCPEstabilished::Instance());
}

void TCPListen::Close(TCPConnection *t) {
    printf("[Listen] TCP close\n");
    ChangeState(t, TCPClosed::Instance());
}
