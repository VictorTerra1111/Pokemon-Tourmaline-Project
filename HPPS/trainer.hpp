#ifndef TRAINER_HPP
#define TRAINER_HPP

#include <team.hpp>
#include <string>

#include "pokemon.hpp"
#include "item.hpp"

class Trainer
{
private:
    ArrayList team;

    string name;

    int badges;
    int level;
    int money;
    int pokedex;
    int xp;

    // Item bag;
public:
    Trainer(const string &vname, int vbadges, int vlevel, int vmoney);

    Trainer(const string &vname);

    int getxp() const;
    int getbadges() const;
    int getpokedex() const;
    int getlevel() const;
    string getname() const;
    int getmoney() const;

    int upmoney(unsigned int value);
    int downmoney(unsigned int value);

    int uplevel(int vxp);
    int upbad(int num = 1);
    int upxp(unsigned int vxp);

    void add_team(Pokemon newpoke);

    // bool updex(Pokemon newpoke);
    // add bag
};

#endif