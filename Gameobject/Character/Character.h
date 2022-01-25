//
// Created by Дени Абакаев on 20.01.2022.
//

#ifndef ROGUE_LIKE_CHARACTER_H
#define ROGUE_LIKE_CHARACTER_H

#include <utility>
#include "../Gameobject.h"


class Character : public Gameobject {
protected:
    float damage;

    int vision;
public:

    float getDamage();
    char GetSym();
    int  GetVision();
    std::pair<int, int> getPos();
};



#endif //ROGUE_LIKE_CHARACTER_H
