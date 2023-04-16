#ifndef FACTORYMETHOD_MONSTERCREATOR_H
#define FACTORYMETHOD_MONSTERCREATOR_H

#include "Creator.h"
#include "../Heroes/Monster.h"

class MonsterCreator : public Creator {
public:
    Hero* CreateHero() override {
        return new Monster();
    }
};


#endif //FACTORYMETHOD_MONSTERCREATOR_H
