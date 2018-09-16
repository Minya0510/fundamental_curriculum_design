//
// Created by wxh on 18-9-5.
//

#include "utility.h"

bool get_two_number(DATA_TYPE a[]){
    for (int i = 0; i < NUM; i++) {
        std::cout << "input  NO " << i  << ":" ;
        std::cin >> a[i];
        if (!std::cin) {
            std::cout << "input error!" << std::endl;
            return false;
        }
    }
    return true;
}       // get two numbers

DATA_TYPE sum_two_number(DATA_TYPE a, DATA_TYPE b){
    return a+b;
}       // sum

void put_one_number(DATA_TYPE a, DATA_TYPE b, DATA_TYPE c){
    std::cout << a << " + " << b << " = " << c << std::endl;
}       // put one number