#include <iostream>
#include <string>

#include <cstdlib>
#include <ctime>

#include "pokemon.hpp"

#define BASE 0

using namespace std;

Pokemon::Pokemon(string vname, string vtype, string vsubtype)
{
    srand(time(0));

    name = vname;
    type = vtype;
    subtype = vsubtype;

    level = 0;
    xp = 0;
    stage = BASE;

    shinycalculate();
    ismythical(name);
    islegendary(name);
    canevolve();
}

string Pokemon::getname() const { return name; }
string Pokemon::gettype() const { return type; }
string Pokemon::getsubtype() const { return subtype; }
int Pokemon::getlevel() const { return level; }
int Pokemon::getxp() const { return xp; }
int Pokemon::getstage() const { return stage; }

bool Pokemon::getshiny() const { return shiny; }
bool Pokemon::getmythical() const { return mythical; }
bool Pokemon::getevolve() const { return evolve; }
bool Pokemon::getlegendary() const { return legendary; }

bool Pokemon::canevolve()
{
    int nec = (1000 + (level - 5) * (level - 5) * 100);

    if (legendary || mythical)
        return false;
    if (stage == 2)
        return false;
    if (xp > nec)
        return false;

    return true;
}

void Pokemon::shinycalculate()
{
    int poke_odd = rand() % 100; // 4096

    if (poke_odd == 0)
        shiny = true;

    else
        shiny = false;
}

bool Pokemon::islegendary(string namepkmn)
{
    if (namepkmn == "Veracton" || namepkmn == "Lavorus" || namepkmn == "Danterius")
        return true;
    return false;
}

bool Pokemon::ismythical(string namepkmn)
{
    if (namepkmn == "Witnelle")
    {
        return true;
    }
    return false;
}

/*
        string name;
        string type;
        string subtype;

        int level;
        int xp;
        int stage;

        bool shiny;
        bool mythical;
        bool legendary;
        bool evolve;
*/
string Pokemon::upload() const
{
    string a = this->getname() + "," + this->gettype() + "," + this->getsubtype() + "," +
               to_string(this->getlevel()) + "," + to_string(this->getxp()) + "," +
               to_string(this->getstage()) + "," + std::to_string(this->getshiny()) + "," +
               to_string(this->getmythical()) + "," + to_string(this->getlegendary()) + "," +
               to_string(this->getevolve());
    cout << a << endl;
    return a;
}
// fazer ler no arquivo
