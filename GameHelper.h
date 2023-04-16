#ifndef FACTORYMETHOD_GAMEHELPER_H
#define FACTORYMETHOD_GAMEHELPER_H

#include <iostream>

#include "Game.h"
#include "Types.h"

using namespace std;

class GameHelper {
private:
    TypeClassHero ChoiseClass(TypeHero type) {
        int input;
        do {
            switch (type) {
                case TypeHero::Hero:
                    cout << "HERO" << endl;
                    break;
                case TypeHero::Enemy:
                    cout << "ENEMY" << endl;
                    break;
            }

            cout << "1. Elf" << endl;
            cout << "2. Monster" << endl;
            cout << "3. Ghost" << endl;
            cin >> input;
        } while (input < 1 or input > 3);

        switch (input) {
            case 1:
                return TypeClassHero::Elf;
            case 2:
                return TypeClassHero::Monster;
            case 3:
                return TypeClassHero::Ghost;
        }
    }

public:
    TypeClassHero ChoiseClassHero() {
        return ChoiseClass(TypeHero::Hero);
    }
    TypeClassHero ChoiseClassEnemy() {
        return ChoiseClass(TypeHero::Enemy);
    }
};



#endif //FACTORYMETHOD_GAMEHELPER_H
