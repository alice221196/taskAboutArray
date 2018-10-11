//
// Created by Alice on 11.10.2018.
//

#ifndef TASKABOUTARRAY_POINT_H
#define TASKABOUTARRAY_POINT_H

#include <iostream>
#include <vector>
class Point{
public:
    Point();

    static std::vector <Point *> Vect;
    static void deletePoint();
};
#endif //TASKABOUTARRAY_POINT_H
