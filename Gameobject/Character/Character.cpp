//
// Created by Дени Абакаев on 20.01.2022.
//

#include "Character.h"

float Character::getDamage() {
    return this->damage;
}
std::pair<int, int> Character::getPos() {
    return {this->x,this->y};
}

int Character::GetVision() {
    return this->vision;
}