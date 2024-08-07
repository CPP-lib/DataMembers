//
// Created by Kevin Stradtman on 8/7/24.
//
#include <iostream>
#include "Cat.h"


using namespace std;

Cat::Cat() {
    cout << "Cat Created" << endl;
    happy = true;
}
Cat::~Cat() {
    cout << "Cat Destroyed" << endl;
    happy = false;
}

void Cat::speak() const {
    if(happy) {
        cout << "Moow wow" << endl;
    } else {
        cout << "hisssssss" << endl;
    }
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeUnHappy() {
    happy = false;
}

