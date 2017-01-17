//=========================================================================================//
//=09/21/2016                                                              Alexander Alava=//
//=savingsAccount.h                                                              U35432961=//
//=                                                                                       =//
//=              This is the header file for the savingsAcount class                      =//
//=========================================================================================//

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "account.h"

class savingsAccount : public account
{
        protected:

        // Declaring a variable that will hold the value of the rate inside the object //
        double rate;

        public:

        // Declaring the constructor for the savingsAccount class //
        savingsAccount(double initialBalance, double initialRate);

        // Declaring member functions for the class //
        double calculateInterest();
        ~savingsAccount(void);
};

#endif
