#include "car.h"


Car::Car() {
    make[0] = '\0';
    model[0] = '\0';
    year = 0;
};

Car::Car(const char mk[], const char mdl[], const int y) {
    strcpy(make, mk);
    strcpy(model, mdl);
    year = y;
}


void Car::getMake(char mk[]) {
    strcpy(mk, make);
}

void Car::getModel(char mdl[]) {
    strcpy(mdl, model);
}

int Car::getYear() {
    return year;
}

void Car::setMake(const char mk[]) {
    strcpy(make, mk);
}

void Car::setModel(const char mdl[]) {
    strcpy(model, mdl);
}

void Car::setYear(int y) {
    if(y < 1885) { //First Car was made in 1885
        cout << "The first car ever made was created in 1885. You cant have a year less than that" << endl;
        return;
    }
    year = y;
}

void Car::print() {
    cout << "======Car======" << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}