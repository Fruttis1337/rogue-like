//
// Created by Дени Абакаев on 20.01.2022.
//

#ifndef ROGUE_LIKE_GAMEOBJECT_H
#define ROGUE_LIKE_GAMEOBJECT_H

enum  GameResult { CanMove, CantMove, CanAttack, AidHP, Damage, Destroy, Nothing };

class Wall;
class Knight;
class Zombie;
class Dragon;
class Princess;
class AidKit;
class Projectile;
class Floor;

class Gameobject {
public:
    char GetSym();
    void hit(int damage);
    float getHp();
    virtual GameResult collide(Wall*) = 0;

    virtual GameResult collide(Knight*) = 0;

    virtual GameResult collide(Zombie*) = 0;

    virtual GameResult collide(Dragon*) = 0;

    virtual GameResult collide(Princess*) = 0;

    virtual GameResult collide(AidKit*) = 0;

    virtual GameResult collide(Projectile*) = 0;

    virtual GameResult collide(Floor*) = 0;
protected:
    int x;
    int y;
    char sym_char;
    float hp;
    float max_hp;
};

#endif //ROGUE_LIKE_GAMEOBJECT_H
