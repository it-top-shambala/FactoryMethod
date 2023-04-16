#ifndef FACTORYMETHOD_HERO_H
#define FACTORYMETHOD_HERO_H

#include <string>

using namespace std;

class Hero {
public:
    virtual void Attack(Hero* enemy) = 0;
protected:
    string name;

    Hero(string name) {
        this->name = name;
    }
};


#endif //FACTORYMETHOD_HERO_H
