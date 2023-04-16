#ifndef FACTORYMETHOD_CREATOR_H
#define FACTORYMETHOD_CREATOR_H

#include "../Heroes/Hero.h"

class Creator {
public:
    virtual Hero* CreateHero() = 0;
};


#endif //FACTORYMETHOD_CREATOR_H
