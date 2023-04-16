#include <iostream>

#include "Game.h"
#include "GameHelper.h"

using namespace std;

int main() {
    Game* game = new Game();

    SelectHero(game, TypeHero::Hero);
    SelectHero(game, TypeHero::Enemy);

    game->Attack();

    return 0;
}


