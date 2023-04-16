#ifndef FACTORYMETHOD_GAME_H
#define FACTORYMETHOD_GAME_H

#include "./Heroes/Hero.h"
#include "./Heroes/Elf.h"
#include "./Heroes/Monster.h"
#include "./Heroes/Ghost.h"

#include "./Creators/Creator.h"
#include "./Creators/ElfCreator.h"
#include "./Creators/MonsterCreator.h"
#include "./Creators/GhostCreator.h"

class Game {
private:
    Hero* hero;
    Hero* enemy;

    Creator* heroCreator;
    Creator* enemyCreator;

public:
    Game() {
        hero = nullptr;
        enemy = nullptr;

        heroCreator = nullptr;
        enemyCreator = nullptr;
    }

    void CreateHero(Creator* creator) {
        heroCreator = creator;
        hero = heroCreator->CreateHero();
    }

    void CreateEnemy(Creator* creator) {
        enemyCreator = creator;
        enemy = enemyCreator->CreateHero();
    }

    void Attack() {
        hero->Attack(enemy);
        enemy->Attack(hero);
    }

};


#endif //FACTORYMETHOD_GAME_H
