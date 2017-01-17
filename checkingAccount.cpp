//===============================================================================================================//
//=09/21/2016                                                                                    Alexander Alava=//
//=checkingAccount.cpp                                                                                 U35432961=//
//=                                                                                                             =//
//=                   This is the implementation file for the checkingAccount class                             =//
//===============================================================================================================//

#include "checkingAccount.h"
#include <iostream>
using namespace std;

// Defining the constructor for the checkingAccount class //
checkingAccount::checkingAccount(double initialBalance, double initialFee) : account(initialBalance)
{
        // Assigning value to a variable that will hold the value of the fee //
        fee = initialFee;

        // Checking if the fee set as input is a valid value //
        if (fee < 0)
        {
                // Printing error message in case it is not valid //
                cout << "\nThe fee must be positive in order to perform the charges!" << endl;
                cout << "No transaction was performed due to this error.\n" << endl;
                
		return;
        }
}

// Redefining and overriding the credit member function inherited from the base class //
bool checkingAccount::credit(double deposit)
{
        // Checking if the credit member function has been executed as desired //
        if (account::credit((double) deposit))
        {
                // Substracting the fee from the balance as the transaction was completed //
                balance = balance - fee;

                // Printing a success message to let the user know that the fee was charged //
                cout << "A fee of $" << fee << " was charged for this transaction!" << endl;
	}

	// Printing the type of account for the function //
	cout << "This is the credit function for checking account!" << endl;

        return true;

}

// Redifining and overriding the debit member function inherited from the base class //
bool checkingAccount::debit(double extraction)
{
        // Checking if the debit member function has been executed as desired //
        if (account::debit((double) extraction))
        {
                // Substracting the fee from the balance as the transaction was completed //
                balance = balance - fee;

                // Printing a success message to let the user know that the fee was charged //
                cout << "A fee of $" << fee << " was charged for this transaction!" << endl;
	}

	// Printing the type of account for the function //
	cout << "This is the debit function for checking account!" << endl;	

        return true;
}

// Defining the destructor for this class //
checkingAccount::~checkingAccount(void)
{
        // Deletion of the object is done automatically without any body or function calling //
}

