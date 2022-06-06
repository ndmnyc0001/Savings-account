//
//  #2 CPP.cpp
//  main
//
//  Created by Nicole on 3/20/22.
// Completed 03/26/2022

#include "balance rates.hpp"
#include <iostream>

using namespace std;

float SavingsAccount::annualInterestRate = 0; //declare and initialize the annual interest rate to 0

void SavingsAccount::modifyInterestRate(float interestRate) // modify the rate of this static function
{
    annualInterestRate = interestRate;
}

void SavingsAccount::setBalance(float balance) // set the balance
{
    savingsBalance = balance;
}

float SavingsAccount::calculateMonthInt() // Calculate the savings balance with the monthly interest
{
    float monthInt = 0;
    monthInt += savingsBalance * annualInterestRate / 12;
    return savingsBalance += monthInt;
}
