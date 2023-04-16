#ifndef FACTORYMETHOD_GHOST_H
#define FACTORYMETHOD_GHOST_H

#include <iostream>

#include "Hero.h"

using namespace std;

class Ghost : public Hero {
private:
    static string NAME;

public:
    void Attack(Hero *enemy) override {
        cout << name << " attack" << endl;
    }

    Ghost() : Hero(NAME) {}
};

string Ghost::NAME = "Ghost";

#endif //FACTORYMETHOD_GHOST_H
