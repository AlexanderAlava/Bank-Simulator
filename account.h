//=========================================================================================//
//=09/21/2016                                                              Alexander Alava=//
//=account.h                                                                     U35432961=//
//=                                                                                       =//
//=                This is the header file for the acount class                           =//
//=========================================================================================//

#ifndef ACCOUNT_H
#define ACCOUNT_H

class account
{
        protected:

        // Declaring a variable to hold the value of the balance inside the object //
        double balance;

        public:

        // Declaring the constructor //
        account(double initialBalance);

        // Declaring virtual member functions for the account class //
        virtual bool credit(double deposit);
        virtual bool debit(double extraction);
	virtual double calculateInterest();

	// Declaring non-virtual member functions for the account class //
	double getBalance(void);
        ~account(void);
};

#endif
