//
// Created by Дени Абакаев on 20.01.2022.
//

#ifndef ROGUE_LIKE_FLOOR_H
#define ROGUE_LIKE_FLOOR_H

#include "../Gameobject.h"
#include <string>

class Floor: public Gameobject {
public:
    Floor(int x, int y, std::string sym);
    GameResult collide(Zombie*) override;
    GameResult collide(Floor*) override;
    GameResult collide(Knight*) override;

    GameResult collide(Princess*) override;

    GameResult collide(AidKit*) override;

    GameResult collide(Dragon*) override;

    GameResult collide(Wall*) override;

    GameResult collide(Projectile*) override;
};


#endif //ROGUE_LIKE_FLOOR_H
