//
//  main.cpp
//  StatePattern
//
//  Created by air seok on 2018. 4. 19..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include "TCPConnection.h"
#include "TCPOctetStream.h"

int main(int argc, const char * argv[]) {
    TCPConnection* conn = new TCPConnection;
    conn->ActiveOpen();
    
    TCPOctetStream* oct = new TCPOctetStream;
    conn->ProcessOctet(oct);
    conn->Close();
    
    return 0;
}
