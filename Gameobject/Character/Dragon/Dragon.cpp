//
// Created by Дени Абакаев on 20.01.2022.
//

#include "Dragon.h"

Dragon::Dragon(int x, int y, std::string sym, std::string hp, std::string damage) {
    this->hp = stoi(hp);
    this->sym_char = sym[0];
    this->damage = stoi(damage);
    this->max_hp = stoi(hp);
    this->x = x;
    this->y = y;
}

void Dragon::move(int x, int y) {
    this->x = x;
    this->y = y;
}

GameResult Dragon::collide(Zombie*) {
    return CantMove;
}
GameResult Dragon::collide(Dragon*) {
    return CantMove;
}
GameResult Dragon::collide(AidKit*) {
    return Nothing;
}
GameResult Dragon::collide(Princess*) {
    return CantMove;
}
GameResult Dragon::collide(Knight*) {
    return CanAttack;
}
GameResult Dragon::collide(Floor*) {
    return Nothing;
}
GameResult Dragon::collide(Wall*) {
    return Nothing;
}
GameResult Dragon::collide(Projectile*) {
    return CanAttack;
}
GameResult Dragon::Collide(Gameobject* buf) {
    return buf->collide(this);
}