#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;
lass Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal();
    Animal(string n, int a, bool h);
    virtual ~Animal();

    virtual void display() const;
    void feed();
    bool getIsHungry() const;
    string getName() const;
    int getAge() const;
};
#endif
