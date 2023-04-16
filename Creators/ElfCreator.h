#ifndef FACTORYMETHOD_ELFCREATOR_H
#define FACTORYMETHOD_ELFCREATOR_H

#include "Creator.h"
#include "../Heroes/Elf.h"

class ElfCreator : public Creator {
public:
    Hero* CreateHero() override {
        return new Elf();
    }
};


#endif //FACTORYMETHOD_ELFCREATOR_H
