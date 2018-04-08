//
//  Point.h
//  MementoPattern
//
//  Created by air seok on 2018. 3. 22..
//  Copyright © 2018년 air seok. All rights reserved.
//

#ifndef Point_h
#define Point_h

class Point {
public:
    Point(double x, double y): _x(x), _y(y) {}
    
private:
    double _x, _y;
};

#endif /* Point_h */
