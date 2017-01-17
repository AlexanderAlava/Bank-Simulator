//===========================================================================================================================================//
//=09/21/2016                                                                                                                Alexander Alava=//
//=account.cpp                                                                                                                     U35432961=//
//=                                                                                                                                         =//
//=                                        This is the implementation file for the account class                                            =//
//===========================================================================================================================================//

#include "account.h"
#include <iostream>
using namespace std;

// Defining the constructor for the account class //
account::account(double initialBalance)
{
        // Assigning value to the variable that will hold the balance during execution //
        balance = initialBalance;

        // Checking if the initialBalance entered as a parameter is a valid value //
        if (balance < 0.0)
        {
                // Setting the balance to 0 as instructed if the entered value is invalid //
                balance = 0.0;

                // Printing error message //
                cout << "\nThe initial account balance value was invalid!\nAccount balance set to $0 as a result of this error." << endl;
        }
}

// Defining the credit member function that will add funds to the account balance //
bool account::credit(double deposit)
{
        // Checking if the deposit value entered as a parameter is a valid value //
        if (deposit < 0)
        {
                // Printing an error message //
                cout << "\nYou cannot deposit a negative amount of money!\nThe deposit for $" << deposit << " was not executed." << endl;
                return false;
        }
        else
        {
                // Executing the addition once the deposit value is tested for validity //
                balance = balance + deposit;

                // Printing a success message to inform the user that the deposit has been successful //
                cout << "\n$" << deposit << " has been credited to your account balance!" << endl;
        }

	// Printing the type of account for the function //
	cout << "This is the credit function for account!" << endl;	

        return true;
}

// Defining the debit member function that will substract fund to the account balance //
bool account::debit(double extraction)
{
        // Checking if the extraction value entered as a parameter is a valid value //
        if (extraction < 0)
        {
                // Printing an error message when the extraction value is negative //
                cout << "\nPlease enter your debit as a positive number!\nYour debit of $" << extraction << " couldn't be processed." << endl;
                return false;
        }

        // Checking if the extraction value is greater or smaller than the current balance //
        else if (extraction > balance)
        {
                // Printing an error message when the extraction value is bigger than the current balance //
                cout << "\nDebit amount exceeded account balance!\nDebit request could not be processed." << endl;
                return false;
        }
        else
        {
                // Executing the substraction once the debit value is tested for validity //
                balance = balance - extraction;

                // Printing a succes message to inform the user that the extraction has been successful //
                cout << "\n$" << extraction << " has been debited from your account balance!" << endl;
        
		// Printing the type of account for the function //
		cout << "This is the debit function for account!\n" << endl;
	}

        return true;
}

// Defining the getBalance member function that will return the current balance of the account as a double //
double account::getBalance(void)
{
        return balance;
}

// Defining the destructor for this class //
account::~account(void)
{
        // Deletion of the object is done automatically without any body or function calling //
}

// Defining the virtual function so that an object of this class can be created //
double account::calculateInterest()
{
	return 0;
}
