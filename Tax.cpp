//Larry Fritz
//Student ID# 2837259
//CS2 Assignment 2-A
#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>
#include "TaxConstants.hpp"
#include "Tax.hpp"

void taxTaker(taxPayer arr[TAXCONSTANTS::SIZE])
{
    std::cout << "Please enter the annual income and tax rate for " << TAXCONSTANTS::SIZE << " tax payers:" << std::endl << std::endl;

    //Loop to take in the values for each taxpayer up to SIZE
    for(int x = 0; x < TAXCONSTANTS::SIZE; x++)
    {
    //Input validation
    bool loopFlag = true;
    do
    {
    std::cout << "Enter this year's income for tax payer "
    << x + 1 << ": " << std::endl;

    //Take in each person's tax rate
    std::cin >> arr[x].income;

        if((std::cin.fail()) || (arr[x].income < 0))
        {
        std::cout << "The taxpayer's income must be positive" << std::endl;

        std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        else
        {
        loopFlag = false;
        }
    }while(loopFlag);

    //Input validation
    loopFlag = true;
    do
    {
    std::cout << "Enter this year's tax rate for tax payer "
    << x + 1 << ": " << std::endl;

    //Take in each person's tax rate
    std::cin >> arr[x].taxRate;

        if((std::cin.fail()) || (arr[x].taxRate < 0.01) || (arr[x].taxRate > 9.9))
        {
        std::cout << "The taxpayer's tax rate must be between 0.01 and 9.9" << std::endl;

        std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        else
        {
        loopFlag = false;
        }
    }while(loopFlag);
    std::cout << std::endl;

    }

}

//Calculate and print each person's tax total
void taxPrint(taxPayer arr[TAXCONSTANTS::SIZE])
{
std::cout << "Taxes due for this year:" << std::endl;

    for(int x = 0; x < TAXCONSTANTS::SIZE; x++)
    {
    std::cout << "Tax Payer # " << x + 1 << ": $" << std::fixed << std::setprecision(2) << arr[x].income * (arr[x].taxRate * pow(10,-2)) << std::endl;
    }
}



