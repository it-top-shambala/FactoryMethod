#ifndef FACTORYMETHOD_ELF_H
#define FACTORYMETHOD_ELF_H

#include <iostream>

#include "Hero.h"

using namespace std;

class Elf : public Hero{
private:
    static string NAME;

public:
    void Attack(Hero* enemy) override {
        cout << name << " attack" << endl;
    }

    Elf() : Hero(NAME) {}
};

string Elf::NAME = "Elf";

#endif //FACTORYMETHOD_ELF_H
