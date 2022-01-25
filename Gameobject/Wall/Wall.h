//
// Created by Дени Абакаев on 20.01.2022.
//

#ifndef ROGUE_LIKE_WALL_H
#define ROGUE_LIKE_WALL_H

#include "../Gameobject.h"
#include <string>

class Wall: public Gameobject {
public:
    Wall(int x, int y, std::string sym);

    GameResult collide(Zombie*) override;
    GameResult collide(Wall*) override;

    GameResult collide(Knight*) override;

    GameResult collide(Princess*) override;

    GameResult collide(AidKit*) override;

    GameResult collide(Dragon*) override;

    GameResult collide(Projectile*) override;

    GameResult collide(Floor*) override;
};


#endif //ROGUE_LIKE_WALL_H
