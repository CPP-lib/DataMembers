#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
    cout << "Starting Program" << endl;
    Cat buddy;
    Cat ivy;
    buddy.makeHappy();
    buddy.speak();
    ivy.makeUnHappy();
    ivy.speak();
    cout << "Ending Program" << endl;
    return 0;

}
