//
// Created by Дени Абакаев on 20.01.2022.
//

#ifndef ROGUE_LIKE_DRAGON_H
#define ROGUE_LIKE_DRAGON_H

#include <string>
#include "../Character.h"
#include "Projectile/Projectile.h"


class Dragon: public Character {
public:
    Dragon(int x, int y, std::string sym, std::string hp, std::string damage);
    Projectile Attack(int x,int y);
    void move(int x, int y);
    GameResult collide(Zombie*) override;
    GameResult collide(Dragon*) override;
    GameResult collide(Knight*) override;

    GameResult collide(Princess*) override;

    GameResult collide(AidKit*) override;

    GameResult collide(Floor*) override;

    GameResult collide(Wall*) override;

    GameResult collide(Projectile*) override;
    GameResult Collide(Gameobject* buf);
};

#endif //ROGUE_LIKE_DRAGON_H
