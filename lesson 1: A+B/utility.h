/************************************************************
 *
 * FileName: utility.h
 * Author: Wang.Xuhao
 * Version : 1.0
 * Date: 2018-09-05
 *
************************************************************/


#ifndef FUNDAMENTAL_CURRICULUM_DESIGN_UTILITY_H
#define FUNDAMENTAL_CURRICULUM_DESIGN_UTILITY_H

#define  NUM 2
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
typedef float DATA_TYPE;
bool get_numbers(vector<DATA_TYPE> &vecData);
DATA_TYPE sum_numbers(vector<DATA_TYPE> vecData);
void put_one_number(vector<DATA_TYPE> vecData, DATA_TYPE result);

#endif //FUNDAMENTAL_CURRICULUM_DESIGN_UTILITY_H

