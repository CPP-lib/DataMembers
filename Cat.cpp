//
// Created by Kevin Stradtman on 8/7/24.
//
#include <iostream>
#include "Cat.h"


using namespace std;

void Cat::speak() const {
    if(happy) {
        cout << "Mow wow" << endl;
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

