//
// Created by Дени Абакаев on 20.01.2022.
//

#ifndef ROGUE_LIKE_ZOMBIE_H
#define ROGUE_LIKE_ZOMBIE_H


#include "../Character.h"

class Zombie : public Character {
public:
    Zombie(int x, int y, std::string sym, std::string hp, std::string damage);
    void move(int x, int y);
    GameResult collide(Floor*) override;
    GameResult collide(Zombie*) override;
    GameResult collide(Knight*) override;

    GameResult collide(Princess*) override;

    GameResult collide(AidKit*) override;

    GameResult collide(Dragon*) override;

    GameResult collide(Wall*) override;

    GameResult collide(Projectile*) override;
    GameResult Collide(Gameobject* buf);
};

#endif //ROGUE_LIKE_ZOMBIE_H
