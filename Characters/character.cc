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

QString Character::getRaceStr() const
{
    return raceStr;
}

void Character::setRaceStr(const QString &value)
{
    raceStr = value;
}

Races Character::getRace() const
{
    return race;
}

void Character::setRace(const Races &value)
{
    race = value;
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
