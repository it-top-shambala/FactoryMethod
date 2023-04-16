#ifndef FACTORYMETHOD_MONSTER_H
#define FACTORYMETHOD_MONSTER_H

#include <iostream>

#include "Hero.h"

using namespace std;

class Monster : public Hero {
private:
    static string NAME;

public:
    void Attack(Hero* enemy) override {
        cout << name << " attack" << endl;
    }

    Monster() : Hero(NAME){}
};

string Monster::NAME = "Monster";


#endif //FACTORYMETHOD_MONSTER_H
