/* carmain2.cpp 
 * Please don't rewrite this file
 * I will be using the exact
 * same file below when grading
 * 
 * NEED TO DEFINE MAX_STR IN
 * YOUR CAR.H FILE!
 */

#include <iostream>
#include <cstring>
#include "car.h"

using namespace std;

const int MAX_STR = 200;

int main()
{
    char cmake[MAX_STR] = "Honda";
    char cmodel[MAX_STR] = "Civic";
    int cyear = 2017;
	Car sedan;
	Car compact(cmake, cmodel, cyear);

    // input 
    char imake[MAX_STR];
    char imodel[MAX_STR];
    int iyear;

    // output 
    char omake[MAX_STR];
    char omodel[MAX_STR];
    int oyear;
    
    //Print out values before setting them
    cout << "Sedan before initialization: " << endl;
    sedan.getMake(omake);
    cout << "Make: " << omake << endl;

    sedan.getModel(omodel);
    cout << "Model: " << omodel << endl;

    cout << "Year: " << sedan.getYear() << endl;
    
    cout << "Compact values " << endl;
    compact.getMake(omake);
    cout << "Make: " << omake << endl;

    compact.getModel(omodel);
    cout << "Model: " << omodel << endl;

    cout << "Year: " << compact.getYear() << endl;
    
    //set the values for sedan
    cout << "Setting values for sedan: " << endl;
    cout << "Enter make: ";
    cin.getline(imake, MAX_STR);
    sedan.setMake(imake);

    cout << "Enter model: ";
    cin.getline(imodel, MAX_STR);
    sedan.setModel(imodel);
    
    cout << "Enter year: ";
    cin >> iyear;
    cin.ignore(MAX_STR, '\n');
    sedan.setYear(iyear);
   
    // getting the data back out
    cout << "printing values for sedan: " << endl;
    sedan.getMake(omake);
    cout << "Make: " << omake << endl;

    sedan.getModel(omodel);
    cout << "Model: " << omodel << endl;

    cout << "Year: " << sedan.getYear() << endl;
    
    return 0;   
}