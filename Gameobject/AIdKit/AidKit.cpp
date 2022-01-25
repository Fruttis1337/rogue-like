//
// Created by Дени Абакаев on 21.01.2022.
//

#include "AidKit.h"

AidKit::AidKit(int x, int y, std::string sym) {
    this->x = x;
    this->y = y;
    this->sym_char = sym[0];
}

GameResult AidKit::collide(Zombie*) {
    return Destroy;
}
GameResult AidKit::collide(AidKit*) {
    return Nothing;
}
GameResult AidKit::collide(Dragon*) {
    return Destroy;
}
GameResult AidKit::collide(Princess*) {
    return Destroy;
}
GameResult AidKit::collide(Knight*) {
    return AidHP;
}
GameResult AidKit::collide(Floor*) {
    return Nothing;
}
GameResult AidKit::collide(Wall*) {
    return Nothing;
}
GameResult AidKit::collide(Projectile*) {
    return Destroy;
}