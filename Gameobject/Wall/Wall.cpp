//
// Created by Дени Абакаев on 20.01.2022.
//

#include "Wall.h"

Wall::Wall(int x, int y,std::string sym) {
    this->x = x;
    this->y = y;
    this->sym_char = sym[0];
}

GameResult Wall::collide(Wall*) {
    return CantMove;
}
GameResult Wall::collide(Zombie*) {
    return CantMove;
}
GameResult Wall::collide(Dragon*) {
    return CantMove;
}
GameResult Wall::collide(Princess*) {
    return CantMove;
}
GameResult Wall::collide(AidKit*) {
    return Nothing;
}
GameResult Wall::collide(Floor*) {
    return Nothing;
}
GameResult Wall::collide(Knight*) {
    return CantMove;
}
GameResult Wall::collide(Projectile*) {
    return Destroy;
}