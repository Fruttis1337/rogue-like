//
// Created by Дени Абакаев on 21.01.2022.
//

#ifndef ROGUE_LIKE_GAMELOOP_H
#define ROGUE_LIKE_GAMELOOP_H

#include "../Game/Map/Map.h"

class GameLoop {
public:
    GameLoop() = default;
    void start();
    void continueGame(Map map);
};


#endif //ROGUE_LIKE_GAMELOOP_H
