#ifndef PLAYER_H
#define PLAYER_H
#include "gameobject.h"

class Player: public GameObject
{
public:
    Player(int Position_X, int Position_Y, int Height, int Width, int Velocity_X, int Velocity_Y);

};
#endif // PLAYER_H
