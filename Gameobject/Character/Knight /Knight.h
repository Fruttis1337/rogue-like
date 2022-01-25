//
// Created by Дени Абакаев on 20.01.2022.
//

#ifndef ROGUE_LIKE_KNIGHT_H
#define ROGUE_LIKE_KNIGHT_H

#include "../Character.h"
#include <string>

class Knight: public Character {
public:
    Knight() = default;
    Knight(int x, int y, std::string sym, std::string hp, std::string damage, std::string vision);
    std::pair<int,int> try_move(char a);
    void move(int x, int y);
    void Regeneration();
    GameResult Collide(Gameobject* buf);
    GameResult collide(Zombie*) override;
    GameResult collide(Knight*) override;
    GameResult collide(Dragon*) override;

    GameResult collide(Princess*) override;

    GameResult collide(AidKit*) override;

    GameResult collide(Floor*) override;

    GameResult collide(Wall*) override;

    GameResult collide(Projectile*) override;

};


#endif //ROGUE_LIKE_KNIGHT_H
