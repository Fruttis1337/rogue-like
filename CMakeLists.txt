cmake_minimum_required(VERSION 3.19)
project(rogue_like)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 17)

add_executable(rogue_like main.cpp Gameobject/Character/Character.cpp Gameobject/Character/Character.h Gameobject/Gameobject.cpp Gameobject/Gameobject.h Gameobject/Character/Dragon/Dragon.cpp Gameobject/Character/Dragon/Dragon.h Gameobject/Character/Dragon/Projectile/Projectile.cpp Gameobject/Character/Dragon/Projectile/Projectile.h "Gameobject/Character/Knight /Knight.cpp" "Gameobject/Character/Knight /Knight.h" Gameobject/Character/Princess/Princess.cpp Gameobject/Character/Princess/Princess.h Gameobject/Character/Zombie/Zombie.cpp Gameobject/Character/Zombie/Zombie.h Gameobject/Wall/Wall.cpp Gameobject/Wall/Wall.h Gameobject/Floor/Floor.cpp Gameobject/Floor/Floor.h Gameobject/AIdKit/AidKit.cpp Gameobject/AIdKit/AidKit.h Game/GameLoop.h Game/GameLoop.h Game/GameLoop.cpp Game/GameLoop.h)