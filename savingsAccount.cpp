//===============================================================================================================//
//=09/21/2016                                                                                    Alexander Alava=//
//=savingsAccount.cpp                                                                                  U35432961=//
//=                                                                                                             =//
//=                   This is the implementation file for the savingsAccount class                              =//
//===============================================================================================================//

#include "savingsAccount.h"

// Defining constructor for class savingsAccount with inheritance from class account //
savingsAccount::savingsAccount(double initialBalance, double initialRate) : account(initialBalance)
{
        // Assigning value to a variable that will hold the interest rate //
        rate = initialRate;
}

// Defining member function calculateInterest() that will return the interest earned by the savings account //
double savingsAccount::calculateInterest()
{
        // Declaring a variable that will hold the value of the operation to be then returned //
        double interest;

        // Calculating the value of the interest based on the rate //
        interest = (rate * balance);

        return interest;
}

// Defining the destructor for this class //
savingsAccount::~savingsAccount(void)
{
        // Deletion of the object is done automatically without any body or function calling //
}
