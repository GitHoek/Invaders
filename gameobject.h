#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H


class GameObject
{
public:
    GameObject( int Position_X, int Position_Y, int Height, int Width,int Velocity_X, int Velocity_Y);

    int GetHeight();
    void SetHeight(int Height);

    int GetWidth();
    void SetWidth(int Width);

    int GetPosition_X();
    void SetPosition_X(int Position_X);

    int GetPosition_Y();
    void SetPosition_Y(int Position_Y);

    int GetVelocity_X();
    void SetVelocity_X(int Velocity_X);

    int GetVelocity_Y();
    void SetVelocity_Y(int Velocity_Y);

protected:
    int Height;
    int Width;
    int Position_X;
    int Position_Y;
    int Velocity_X;
    int Velocity_Y;

};

#endif // GAMEOBJECT_H




