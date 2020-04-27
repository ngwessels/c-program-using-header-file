#include <iostream>
#include <cstring>

using namespace std;

#ifndef CAR_H
#define CAR_H

class Car {
	public:
		Car();
		Car(const char make[], const char model[], const int year);

		void print();
		
		//Getters
		void getMake(const char make[]);
		void getModel(const char model[]);
		int getYear();

		//Setters
		void setMake(const char make[]);
		void setModel(const char model[]);
		void setYear(int year);
	private:
		char make[200];
		char model[200];
		int year;
};
#endif
