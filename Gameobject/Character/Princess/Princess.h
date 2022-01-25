//
// Created by Дени Абакаев on 20.01.2022.
//

#ifndef ROGUE_LIKE_PRINCESS_H
#define ROGUE_LIKE_PRINCESS_H

#include <string>
#include "../Character.h"

class Princess: public Character {
public:
    Princess() = default;
    Princess(int x, int y, std::string sym, std::string hp, std::string damage);
    GameResult collide(Zombie*) override;
    GameResult collide(Princess*) override;
    GameResult collide(Knight*) override;

    GameResult collide(Floor*) override;

    GameResult collide(AidKit*) override;

    GameResult collide(Dragon*) override;

    GameResult collide(Wall*) override;

    GameResult collide(Projectile*) override;
};




#endif //ROGUE_LIKE_PRINCESS_H
