//
//  balance&rates.hpp
//  main
//
//  Created by Nicole on 3/20/22.
// Completed 03/26/2022

#ifndef _balance_rates_hpp
#define _balance_rates_hpp

//The decleration of the savings account CLASS
class SavingsAccount
{
//Creation of the private CLASS
private:
    static float annualInterestRate; /* Using float function for the static member to determine the int rate for the two savers*/
    
    float savingsBalance; /* using float for savings balance since we are dealing with money also float for annual int rate since we are also dealign with money*/
    
    
public:
    void setBalance(float); // set the balance
    
    static void modifyInterestRate(float); // modify the interest rates .03 and .04

    float calculateMonthInt(); // return the total balance with their interests
    
};

#endif /* _balance_rates_hpp */

