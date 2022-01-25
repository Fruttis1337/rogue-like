//
// Created by Дени Абакаев on 20.01.2022.
//

#ifndef ROGUE_LIKE_PROJECTILE_H
#define ROGUE_LIKE_PROJECTILE_H

#include "../../../Gameobject.h"
#include <utility>

class Projectile: public Gameobject {
public:
    void fly();
    Projectile() = default;
    GameResult collide(Zombie*) override;
    GameResult collide(Projectile*) override;
    GameResult collide(Knight*) override;

    GameResult collide(Princess*) override;

    GameResult collide(AidKit*) override;

    GameResult collide(Dragon*) override;

    GameResult collide(Wall*) override;

    GameResult collide(Floor*) override;
    GameResult collide(Gameobject* buf);
    std::pair<int, int> direction;
    int damage;
    int x;
    int y;
    Projectile(int x,int y,std::pair<int,int> dir);
};


#endif //ROGUE_LIKE_PROJECTILE_H
