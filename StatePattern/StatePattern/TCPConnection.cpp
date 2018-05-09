//
//  TCPConnection.cpp
//  StatePattern
//
//  Created by air seok on 2018. 4. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <stdio.h>
#include "TCPConnection.h"
#include "TCPState.h"
#include "TCPClosed.h"
#include "TCPOctetStream.h"

TCPConnection::TCPConnection() {
    _state = TCPClosed::Instance();
}

void TCPConnection::ChangeState(TCPState *s) {
    _state = s;
}

void TCPConnection::ActiveOpen() {
    _state->ActiveOpen(this);
}

void TCPConnection::PassiveOpen() {
    _state->PassiveOpen(this);
}

void TCPConnection::Close() {
    _state->Close(this);
}

void TCPConnection::Acknowledge() {
    _state->Acknowledge(this);
}

void TCPConnection::Synchronize() {
    _state->Synchronize(this);
}

void TCPConnection::ProcessOctet(TCPOctetStream *t) {
    _state->Transmit(this, t);
}
