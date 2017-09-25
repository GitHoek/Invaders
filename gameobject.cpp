#include "gameobject.h"

GameObject::GameObject( int Position_X, int Position_Y, int Height, int Width, int Velocity_X, int Velocity_Y)
{
        SetHeight(Height);
        SetWidth(Width);
        SetPosition_X(Position_X);
        SetPosition_Y(Position_Y);
        SetVelocity_X(Velocity_X);
        SetVelocity_Y(Velocity_Y);
}

GameObject::GetHeight(){
    return Height;
}
void GameObject::SetHeight(int Height){
    this->Height = Height;
}

GameObject::GetWidth(){
    return Width;
}

void GameObject::SetWidth(int Width){
    this->Width = Width;
}

GameObject::GetPosition_X(){
    return Position_X;
}
void GameObject::SetPosition_X(int Position_X){
    this->Position_X = Position_X;
}

GameObject:: GetPosition_Y(){
    return Position_Y;
}
void GameObject::SetPosition_Y(int Position_Y){
    this->Position_Y = Position_Y;
}

GameObject::GetVelocity_X(){
    return Velocity_X;
}
void GameObject::SetVelocity_X(int Velocity_X){
    this->Velocity_X = Velocity_X;
}

GameObject::GetVelocity_Y(){
    return Velocity_Y;
}
void GameObject::SetVelocity_Y(int Velocity_Y){
    this->Velocity_Y = Velocity_Y;
}
