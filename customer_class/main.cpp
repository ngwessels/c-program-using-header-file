/* 
 * Bank Customer program
 * Demos use of classes
 */
 
#include "customer.h"

int main()
{	
   char last1[] = "Franklin";
   char first1[] = "Anna";
   float balance1 = 1150.00;
   char last2[] = "Mark";
   char first2[] = "Jones";
   float balance2 = 500.00;
  Customer cust1;// using default constructor
  Customer cust2(last2, first2, balance2); // using customized constructor (non-default)
  
  cout << "When declared, Customer object cust1 is initialized to: " << endl;
  cust1.print();
  cout << "When Declared, Customer object cust2 is initialized to: " << endl;
  cust2.print();
  
  
  cout << "Now, need to initialize the values in cust1 " << endl;
  cust1.setFirstName(first1);
  cust1.setLastName(last1);
  cust1.setBalance(balance1);
  cust1.print();
  
  cust1 = cust2;
  
  cout << "assigning the contents of d to c" << endl;
  cout << "this is cust1: " << endl;
  cust1.print();
  cout << "this is cust2: " << endl;
  cust2.print();
  
  const char *last = cust1.getLastName();
  cout << "last name " << last << endl;
  
  return 0;
}
