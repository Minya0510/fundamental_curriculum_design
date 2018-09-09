//
// Created by wxh on 18-9-5.
//

#include "utility.h"

int main(int argc, char const *argv[])
{
    DATA_TYPE a[NUM], b=0;
    std::cout << "Please input two numbers" << std::endl;
    if (get_two_number(a)) {
        b = sum_two_number(a[0], a[1]);
        put_one_number(a[0], a[1], b);
    }
    return 0;
}