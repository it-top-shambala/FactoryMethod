#include <iostream>

#include "Game.h"
#include "GameHelper.h"
#include "Builder.h"

using namespace std;

int main() {
    Game* game = new Game();
    GameHelper* gameHelper = new GameHelper();

    Builder* builder = new Builder(game);
    builder->BuildHeroes(gameHelper->ChoiseClassHero(), gameHelper->ChoiseClassEnemy());

    game->Attack();

    return 0;
}


