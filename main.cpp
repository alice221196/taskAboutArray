#include <iostream>
#include "include/Point.h"

int main(){
//    std::cout<<"Hello, World!"<<std::endl;
    Point a; Point b; Point c;
    for (int i = 0; i <Point::Vect.size() ;i++ ){
        std::cout<< Point::Vect.at(i) <<std::endl;
    }
    Point::deletePoint();
//    for (int i = 0; i <Point::Vect.size() ;i++ ){
//        std::cout<< 'NO' <<std::endl;
//        std::cout<< Point::Vect.at(i) <<std::endl;
//    }

    return 0;
}