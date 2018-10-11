//
// Created by Alice on 11.10.2018.
//
#include <iostream>
#include <vector>
#include "../include/Point.h"

std::vector <Point *> Point::Vect;
Point::Point() {
    Vect.push_back(this);
}

void Point::deletePoint() {
    for (int i = 0; i < Vect.size() ;i++ ){
        delete(Vect.at(i));
    }
}
