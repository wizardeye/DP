//
//  main.cpp
//  InterpretPattern
//
//  Created by air seok on 2018. 3. 2..
//  Copyright © 2018년 air seok. All rights reserved.
//

#include <iostream>
#include "Context.h"
#include "Constant.h"
#include "VariableExp.h"
#include "AndExp.h"
#include "OrExp.h"

int main(int argc, const char * argv[]) {
    VariableExp* x = new VariableExp("X");
    VariableExp* y = new VariableExp("Y");
    
    BooleanExp* expression;
    expression = new OrExp(
        new AndExp(new Constant(true), x),
        new AndExp(y, new Constant(false))
    );
    
    Context context;
    context.Assign(x, false);   //  var x = false;
    context.Assign(y, true);
    
    bool result = expression->Evaluate(context);
    
    if (result) std::cout << "boolean expression is 'true'\n";
    else std::cout << "boolean expression is 'false'\n";
    
    return 0;
}
