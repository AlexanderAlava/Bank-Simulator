//=========================================================================================//
//=09/21/2016                                                              Alexander Alava=//
//=checkingAccount.h                                                             U35432961=//
//=                                                                                       =//
//=            This is the header file for the checkingAcount class                       =//
//=========================================================================================//

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "account.h"

// Declaring class checking account derived from class account and its member functions //
class checkingAccount : public account
{
        protected:

        // Declaring a variable that will hold the value of the fee inside the class //
        double fee;

        public:

        // Declaring the constructor for the checkingAccount class //
        checkingAccount(double initialBalance, double initialFee);

        // Declaring member functions that will override those from the base class //
        bool credit(double deposit);
        bool debit(double extraction);
        ~checkingAccount(void);
};

#endif
