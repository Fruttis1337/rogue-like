//
// Created by Дени Абакаев on 20.01.2022.
//

#include "Gameobject.h"

char Gameobject::GetSym() {
    return this->sym_char;
}
void Gameobject::hit(int damage) {
    this->hp -= damage;
}
float Gameobject::getHp() {
    return this->hp;
}
