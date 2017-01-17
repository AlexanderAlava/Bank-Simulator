//===============================================================================================================//
//=09/21/2016                                                                                    Alexander Alava=//
//=bank.cpp                                                                                            U35432961=//
//=                                                                                                             =//
//=         This is the driver class for the account, savingsAccount and checkingAccount classes                =//
//===============================================================================================================//

#include "account.h"
#include "savingsAccount.h"
#include "checkingAccount.h"
#include <iostream>
#include <vector>
using namespace std;

int main (void)
{
	// Declaring an integer variable that will be used as an index variable //
	int i;

	// Declaring a vector of account pointers //
	vector < account * > accounts(4);

	// Creating two savings account objects that will be stored in the vector //
	accounts[0] = new savingsAccount(1500.50, 0.1);
	accounts[1] = new savingsAccount(425.75, 0.025);

	// Creating two checking account objects that will be stored in the vector //
	accounts[2] = new checkingAccount(4025.00, 7.25);
	accounts[3] = new checkingAccount(555.55, 5.55);
 	
	// Establishing a for loop that will run through all the objects created //
	for (i = 0; i < 4; i++)
	{
		// Printing a header for each account object //
		cout << "\nAccount number " << i + 1 << ":\n";
		cout << "-----------------\n";
	
		// Printing the initial balance for each account object //
		cout << "\nInitial balance of this account: $" << accounts[i]->getBalance() << "\n";

		// Declaring and defining two double variables that will serve as parameters //
		double take = 0;
		double give = 0;
		
		// Prompting for and reading in user input for the amount to be credited //
		cout << "Please enter the amount that you want to credit: \n";
		cin >> give;
	
		// Calling the member function credit for the object currently being processed //
		accounts[i]->credit(give);

		// Prompting for and reading in user input for the amount to be debitted //
		cout << "\nPlease enter the amount that you want to debit: \n";
        	cin >> take;

		// Calling the member function credit for the object currently being processed //
		accounts[i]->debit(take);

		// Dynamically casting a savings account pointer for the current object //
		savingsAccount * savingsAccountPtr = dynamic_cast<savingsAccount *> (accounts[i]);
		
		// Checking if the current object is a savings account //
		if (savingsAccountPtr != NULL)
		{
			// Printing information about the interests if it is a savings account //
			cout << "Balance before interests: $" << accounts[i]->getBalance() << endl;	
			cout << "Interest earned: $" << accounts[i]->calculateInterest() << endl;
			
			// Crediting the interest amount to the account //
			accounts[i]->credit(accounts[i]->calculateInterest());
		}

		// Printing the final balance of the account //
		cout << "\nFinal balance after all transactions: $" << accounts[i]->getBalance() << endl;
	} 

        return 0;
}
