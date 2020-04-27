
/* customer.cpp
 * Implementation of
 * functions for Customer
 * class. Demo for classes part 1
 */
 
#include "customer.h"


// Default constructor (one with no parameters)
Customer::Customer()
{
	firstName[0] = '\0';
	lastName[0] = '\0';
    balance = 0;
}
        
// Another constructor (for adding all the info at declaration time
Customer::Customer(const char fn[], const char ln[], const float bal)
{
    strcpy(firstName,fn);
    strcpy(lastName,ln);
    balance = bal;	
}
 
void Customer::print()
{
	cout << "======CUSTOMER======" << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Balance: " << balance << endl;
}

void Customer::updateBalance(float amount)
{
	balance += amount;
	if(balance < 0)
	{
		cout << "WARNING: Balance is negative!" << endl;
	}
	
}
        
const char * Customer::getLastName()
{
	return lastName;
	
}

const char * Customer::getFirstName()
{
	return firstName;
}

float Customer::getBalance()
{
	
	return balance;
}
         
void Customer::setLastName(const char ln[])
{
	strcpy(lastName,ln);
}

void Customer::setFirstName(const char fn[])
{

	strcpy(firstName, fn);
}

void Customer::setBalance(float bal)
{
	// cant set balance to 
	// a negative number.
    if(bal < 0)
    {
		cout << "Cant set balance to a negative number!" << endl;
		return;
	}
        
	balance = bal;
}
