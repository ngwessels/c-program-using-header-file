/* customer.h
 * Class for one customer
 * of a bank. Demos classes
 */
 
#include <iostream>
#include <cstring>

using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

const int MAX_CHAR = 200;

class Customer {
	
    public: 
    // These are public and can be accessed
    // outside the class
        
        // Default constructor (one with no parameters)
        Customer();
        
        // Another constructor (for adding all the info at declaration time)
        Customer(const char fn[], const char ln[], const float bal);
        
        void print(); // prints all information about the customer
        void updateBalance(float amount); // adds amount to balance
        
     // these are assessors (getters)
         const char* getLastName();
         const char* getFirstName();
         float getBalance();
         
      // these are mutators (setters)
         void setLastName(const char ln[]);
         void setFirstName(const char fn[]);
         void setBalance(float bal);
         
	private:
	 // These are private and cannot be accessed
	// outside the class
	
	    char lastName[MAX_CHAR];
	    char firstName[MAX_CHAR];
	    float balance;
	    
};

#endif
