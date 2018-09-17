/************************************************************
 *
 * FileName: utility.cpp
 * Author: Wang.Xuhao
 * Version : 1.0
 * Date: 2018-09-05
 *
************************************************************/

#include "utility.h"


/************************************************************
 *
 * Function: get_two_number
 * Description: Get digit form keyboard, the number of digit
 *              depends on the NUM. If input is not digit, the
 *              function will output "input error!"
 * Input:  vector<DATA_TYPE> &vecData
 * Return: Bool(True or False)
 *
************************************************************/

bool get_numbers(vector<DATA_TYPE> &vecData)
{
    DATA_TYPE tem;
    for (int i = 1; i <= NUM; i++) {
        cout << "input  NO " << i  << ":" ;
        cin >> tem;

        if (!cin) {
            cout << "input error!" << endl;
            return false;
        }

        vecData.push_back(tem);
    }
    return true;
}

/************************************************************
 *
 * Function: sum_numbers
 * Description: it will add the members of the vector, return
 *              the result
 * Input: vector<DATA_TYPE> vecData
 * Return: the result of sum
 *
************************************************************/

DATA_TYPE sum_numbers(vector<DATA_TYPE> vecData)
{
    DATA_TYPE sum = 0;
    vector<DATA_TYPE >:: iterator iter;
    for (iter = vecData.begin(); iter != vecData.end(); iter++){
        sum = sum + *iter;
    }
    return sum;
}

/************************************************************
 *
 * Function: put_one_number
 * Description: return the result to terminal
 * Input: vector<DATA_TYPE> vecData,DATA_TYPE result
 * Return: None
 *
************************************************************/

void put_one_number(vector<DATA_TYPE> vecData, DATA_TYPE result)
{
    vector<DATA_TYPE >:: iterator iter;
    for (iter = vecData.begin(); iter != vecData.end()-1; iter++){
        cout << *iter << " + ";
    }
    cout << *iter << " = " << result << endl;
}