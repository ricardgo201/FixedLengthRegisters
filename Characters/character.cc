#include "character.hpp"

QString Character::getName() const
{
    return name;
}

void Character::setName(const QString &value)
{
    name = value;
}

QString Character::getUsername() const
{
    return username;
}

void Character::setUsername(const QString &value)
{
    username = value;
}

QString Character::getRace() const
{
    return race;
}

void Character::setRace(const QString &value)
{
    race = value;
}

Character::Character()
{

}
