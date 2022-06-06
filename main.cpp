//
//  main.cpp
//  main
//
//Created by Nicole on 3/20/22.
//Completed 03/26/2022

#include <iostream>
#include "balance rates.hpp"

using namespace std;

int main()
{
    SavingsAccount saver1,saver2; // declare the class objects
    
    saver1.setBalance(2000.00); //the set functions for both savings accounts
    saver2.setBalance(3000.00);
    cout << "Initial balances:\n";
    cout << endl;
    cout << "Saver 1: 2000.00" << " " << "Saver 2: 3000.00";
    cout << endl;
    
    cout << endl;
    saver1.modifyInterestRate(0.03); // set the int rate to .03 to the static variable month int
    cout << "Balance after 1 month's interest applied at .03\n"; /* reinstate saver 1 and 2 accounts for a new balance*/
    cout << endl;
    cout << "Saver 1:" << " " << saver1.calculateMonthInt() << " " << "Saver 2:" << " " << saver2.calculateMonthInt() << endl;
    cout << endl;
    
    saver1.modifyInterestRate(0.04); // set the int rate to .04 to the static variable month int
    cout << "Balances after 1 month's interest applied at .04:\n"; /* reinstate saver 1 and 2 accounts for a new balance*/
    cout << endl;
    cout << "Saver 1:" << " " << saver1.calculateMonthInt() << " " << "Saver 2:" << " " << saver2.calculateMonthInt() << endl;
    cout << endl;
    
    return 0;
}
