#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <QString>

class Character
{

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

    QString getRaceStr() const;
    void setRaceStr(const QString &value);

    Races getRace() const;
    void setRace(const Races &value);

private:
    QString name;
    QString username;
    QString raceStr;
    Races race;
};

#endif // CHARACTER_HPP
