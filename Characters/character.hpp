#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <QString>

class Character
{
private:
    QString name;
    QString username;
    QString race;
public:
    enum Races{
        SACRO,
        OCRA,
        SADIDA,
        XELOR,
        YOPUKA
    };
    Character();
    Character(Races);
    QString getName() const;
    void setName(const QString &value);
    QString getUsername() const;
    void setUsername(const QString &value);
    QString getRace() const;
    void setRace(const QString &value);
};

#endif // CHARACTER_HPP
