#ifndef TEAM_HPP
#define TEAM_HPP

#include "pokemon.hpp"

class ArrayList {
    private:
        int max, num;
        Pokemon* list; 

    public: 

        ArrayList();

        ~ArrayList();

        void clear();

        int size() const;
        bool isFull() const;
        bool isEmpty() const;

        bool add(const Pokemon e);

        bool add(const int index, const Pokemon e);

        bool get(const int index, Pokemon &e);
        bool set(const int index, const Pokemon &e);

        bool remove(int index);

        bool contains(const Pokemon &e);

};


#endif