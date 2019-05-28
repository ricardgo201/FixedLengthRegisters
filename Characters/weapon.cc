#include "weapon.hpp"

Weapon::Weapon()
{

}

Type Weapon::getType() const
{
    return type;
}

void Weapon::setType(const Type &value)
{
    type = value;
}

QString Weapon::getName() const
{
    return name;
}

void Weapon::setName(const QString &value)
{
    name = value;
}

short Weapon::getLevel() const
{
    return level;
}

void Weapon::setLevel(short value)
{
    level = value;
}
