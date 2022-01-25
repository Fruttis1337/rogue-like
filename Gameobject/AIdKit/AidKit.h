//
// Created by Дени Абакаев on 21.01.2022.
//

#ifndef ROGUE_LIKE_AIDKIT_H
#define ROGUE_LIKE_AIDKIT_H

#include <string>
#include "../Gameobject.h"

class AidKit: public Gameobject {
public:
    AidKit(int x, int y, std::string sym);
    GameResult collide(Zombie*) override;
    GameResult collide(AidKit*) override;
    GameResult collide(Knight*) override;

    GameResult collide(Dragon*) override;

    GameResult collide(Princess*) override;

    GameResult collide(Floor*) override;

    GameResult collide(Wall*) override;

    GameResult collide(Projectile*) override;
};


#endif //ROGUE_LIKE_AIDKIT_H
