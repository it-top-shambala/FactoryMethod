#ifndef FACTORYMETHOD_BUILDER_H
#define FACTORYMETHOD_BUILDER_H


#include "Game.h"
#include "Types.h"


class Builder {
private:
    Game* game;

    void CreateHero(TypeClassHero type) {
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
    void CreateEnemy(TypeClassHero type) {
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
    void SelectHero(TypeHero type, TypeClassHero typeClass) {
        switch (type) {
            case TypeHero::Hero:
                CreateHero(typeClass);
                break;
            case TypeHero::Enemy:
                CreateEnemy(typeClass);
                break;
        }
    }

public:
    Builder(Game *game) : game(game) {}

    void BuildHeroes(TypeClassHero hero, TypeClassHero enemy)
    {
        SelectHero(TypeHero::Hero, hero);
        SelectHero(TypeHero::Enemy, enemy);
    }
};


#endif //FACTORYMETHOD_BUILDER_H
