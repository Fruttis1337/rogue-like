#include <stdio.h>
#include <vector>
#include <memory>

#include "../../Gameobject/Gameobject.h"

class Map {
public:
    Map();

    void printOut();

    char getSym(int x, int y);

    void printWin();
    void printLose();
    bool winOrLose();

    void destroyObject(int x, int y);
    std::shared_ptr<Gameobject> getObjectAt(int x, int y);

    std::shared_ptr<Knight> knight;
    std::shared_ptr<Princess> princess;
    std::vector<std::vector<std::shared_ptr<Gameobject>>> mapObjects;
    std::vector<std::shared_ptr<Zombie>> zombies;
    std::vector<std::shared_ptr<Dragon>> dragons;
    std::vector<std::shared_ptr<Projectile>> projectiles;
};

