#include "SocketWrapperPCH.hpp"
#include "Player.hpp"

Player::Player()
    : health_(10)
    , ammo_(3)
    , name_("Default")
    , position_(10, 10, 10)
    , rotation_(0, 0, 0, 1)
    , weapons_{ 60, 70, 80, 90, 100 }
{}

uint16_t Player::GetHealth() const
{
    return health_;
}

uint16_t Player::GetAmmo() const
{
    return ammo_;
}

void Player::Write(OutputMemoryStream& out_stream) const
{
    out_stream.Write(health_);
    out_stream.Write(ammo_);
    out_stream.Write(name_, 128);
    out_stream.Write(position_);
    out_stream.Write(rotation_);
    out_stream.Write(weapons_);
}

void Player::Read(InputMemoryStream & in_stream)
{
    in_stream.Read(health_);
    in_stream.Read(ammo_);
    in_stream.Read(name_, 128);
    in_stream.Read(position_);
    in_stream.Read(rotation_);
    in_stream.Read(weapons_);
}

void Player::ToString() const
{
    std::cout << name_ << " has health: " << health_ << ", Ammo: " << ammo_ << " Position: " << "(" << position_.mX << ", " << position_.mY << ", " << position_.mZ << ")" << "Quaternion: (" << rotation_.mX << ", " << rotation_.mY << ", " << rotation_.mZ << ", " << rotation_.mW << ")" << std::endl;
    for (const int weapon : weapons_)
    {
        std::cout << weapon << std::endl;
    }
 }
