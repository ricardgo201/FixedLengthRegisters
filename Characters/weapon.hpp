#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <QString>

class Weapon
{
public:
    enum Types{
        SWORD,
        AXE,
        ARCH,
        DAGUES
    };
    Weapon();
    Type getType() const;
    void setType(const Type &value);

    QString getName() const;
    void setName(const QString &value);

    short getLevel() const;
    void setLevel(short value);

private:
    Types type;
    QString name;
    short level;
};

#endif // WEAPON_HPP
