#ifndef FACTORYMETHOD_GAMEHELPER_H
#define FACTORYMETHOD_GAMEHELPER_H

#include <iostream>

#include "Game.h"

using namespace std;

enum TypeHero { Hero, Enemy };
enum TypeClassHero { Elf, Monster, Ghost };

TypeClassHero ChoiseClassHero(TypeHero type) {
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

void CreateHero(Game* game, TypeClassHero type) {
    switch (type) {
        case TypeClassHero::Elf:
            game->CreateHero(new ElfCreator());
            break;
        case TypeClassHero::Monster:
            game->CreateHero(new MonsterCreator());
            break;
        case TypeClassHero::Ghost:
            game->CreateHero(new GhostCreator());
            break;
    }
}

void CreateEnemy(Game* game, TypeClassHero type) {
    switch (type) {
        case TypeClassHero::Elf:
            game->CreateEnemy(new ElfCreator());
            break;
        case TypeClassHero::Monster:
            game->CreateEnemy(new MonsterCreator());
            break;
        case TypeClassHero::Ghost:
            game->CreateEnemy(new GhostCreator());
            break;
    }
}

void SelectHero(Game* game, TypeHero type) {
    TypeClassHero typeClass = ChoiseClassHero(type);
    switch (type) {
        case TypeHero::Hero:
            CreateHero(game, typeClass);
            break;
        case TypeHero::Enemy:
            CreateEnemy(game, typeClass);
            break;
    }
}

#endif //FACTORYMETHOD_GAMEHELPER_H
