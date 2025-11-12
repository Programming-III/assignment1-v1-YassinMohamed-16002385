#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"

using namespace std;

int main() {
    Enclosure e1(10);

    Mammal m1("Lion", 5, true, "Golden");
    Bird b1("Parrot", 2, false, 0.25f);
    Reptile r1("Snake", 3, true, true);

    e1.addAnimal(&m1);
    e1.addAnimal(&b1);
    e1.addAnimal(&r1);

    Visitor v1("Sarah Ali", 3);

    cout << "Enclosure 1 Animals:" << endl;
    e1.displayAnimals();
    cout << "Visitor Info:" << endl;
    v1.displayInfo();

    return 0;
}
