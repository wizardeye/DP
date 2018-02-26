//
//  HelpHandler.h
//  ChainOfResponsibility
//
//  Created by air seok on 2018. 2. 26..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef HelpHandler_h
#define HelpHandler_h

typedef int Topic;
const Topic NO_HELP_TOPIC = -1;

class HelpHandler {
public:
    HelpHandler(HelpHandler* = nullptr, Topic = NO_HELP_TOPIC);
    
    virtual bool HasHelp();
    virtual void SetHandler(HelpHandler*, Topic);
    virtual void HandleHelp();
    
private:
    HelpHandler* _successor;
    Topic _topic;
};

#endif /* HelpHandler_h */
