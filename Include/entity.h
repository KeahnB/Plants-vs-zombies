#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>
#include <ctime>

using namespace sf;
using namespace std;

class   Entity {
public:
    int     health;
    int     damage;
    bool    alive;
    bool    attack;
    int     position;
    Clock   atkRate;

    virtual void    setHealth(int) = 0;
    virtual void    setDamage(int) = 0;
    virtual int     getHealth() = 0;
    virtual int     getDamage() = 0;
    virtual bool    startAttack(int) = 0;

    void            death();
    bool            getStatus();

    virtual         ~Entity();
};

#endif