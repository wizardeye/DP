//
//  TCPState.cpp
//  StatePattern
//
//  Created by air seok on 2018. 5. 8..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <stdio.h>
#include "TCPState.h"
#include "TCPConnection.h"
#include "TCPOctetStream.h"

void TCPState::Transmit(TCPConnection* , TCPOctetStream* ) { printf("not impl\n");}
void TCPState::ActiveOpen(TCPConnection* ) { printf("not impl\n");}
void TCPState::PassiveOpen(TCPConnection* ) { printf("not impl\n");}
void TCPState::Close(TCPConnection* ) { printf("not impl\n");}
void TCPState::Synchronize(TCPConnection* ) { printf("not impl\n");}
void TCPState::Acknowledge(TCPConnection* ) { printf("not impl\n");}
void TCPState::Send(TCPConnection* ) { printf("not impl\n");}

void TCPState::ChangeState(TCPConnection *c, TCPState *t) {
    c->ChangeState(t);
}
