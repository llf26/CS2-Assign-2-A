//Larry Fritz
//Student ID# 2837259
//CS2 Assignment 2-A
#include <iostream>
#include "Tax.hpp"

using namespace std;

int main()
{

    //Declare array of taxPayers
    taxPayer arr[TAXCONSTANTS::SIZE];

    //Take in incomes and tax rates
    taxTaker(arr);
    //Calculate and print tax totals
    taxPrint(arr);

    return 0;
}
