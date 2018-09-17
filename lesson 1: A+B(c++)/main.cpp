/************************************************************
 *
 * FileName: main.cpp
 * Author: Wang.Xuhao
 * Version : 1.0
 * Date: 2018-09-05
 *
************************************************************/

#include "utility.h"

int main(int argc, char const *argv[])
{
    vector<DATA_TYPE> vecData;
    DATA_TYPE result = 0;

    cout << "Please input " << NUM << " numbers" << endl;

    if (get_numbers(vecData)) {
        result = sum_numbers(vecData);
        put_one_number(vecData,result);
    }

    return 0;
}