#ifndef FACTORYMETHOD_GHOSTCREATOR_H
#define FACTORYMETHOD_GHOSTCREATOR_H

#include "Creator.h"
#include "../Heroes/Ghost.h"

class GhostCreator : public Creator {
public:
    Hero *CreateHero() override {
        return new Ghost();
    }
};


#endif //FACTORYMETHOD_GHOSTCREATOR_H
