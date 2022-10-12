#ifndef SUNFLOWER_H
#define SUNFLOWER_H
#include "entity.h"

class Sunflower : public Entity
{
public:
    Sunflower();
    void    setHealth(int x = 100);
    void    setDamage(int x = 0);
    int     getHealth();
    int     getDamage();
    bool    startAttack(int x = 1);
    virtual ~Sunflower();
};

#endif