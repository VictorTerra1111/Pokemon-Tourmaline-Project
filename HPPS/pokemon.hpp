#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>

using namespace std;

class Pokemon{
    private:
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

    public:

        Pokemon(string vname = "missingno", string vtype = "NULL", string subtype = "NULL");

        int getlevel() const;
        int getxp() const;
        int getstage() const;

        bool getshiny() const;
        bool getmythical() const;
        bool getlegendary() const;
        bool getevolve() const;

        
        string getname() const;
        string gettype()const;
        string getsubtype() const;

        bool canevolve();
        void shinycalculate();
        bool islegendary(string namepkmn);
        bool ismythical(string namepkmn);

        string upload() const;
        //fazer outro metodo
};

#endif