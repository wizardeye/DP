//
//  TCPEstabilished.cpp
//  StatePattern
//
//  Created by air seok on 2018. 4. 20..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <stdio.h>
#include "TCPConnection.h"
#include "TCPEstabilished.h"
#include "TCPListen.h"
#include "TCPClosed.h"
#include "TCPOctetStream.h"


TCPState* TCPEstabilished::_instance = nullptr;

TCPState* TCPEstabilished::Instance() {
    if (!_instance) {
        _instance = new TCPEstabilished;
    }
    
    return _instance;
}

void TCPEstabilished::Close(TCPConnection* t) {
    printf("[estabilished] Close\n");
    ChangeState(t, TCPListen::Instance());
}

void TCPEstabilished::Transmit(TCPConnection* t, TCPOctetStream* o) {
    printf("[estabilished] transmit\n");
    o->Read();
    ChangeState(t, TCPListen::Instance());
}
