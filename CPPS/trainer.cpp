#include <iostream>
#include <string>
#include "trainer.hpp"

using namespace std;

Trainer::Trainer(const string &vname, int vbadges, int vlevel, int vmoney):
name(vname), badges(vbadges), level(vlevel), money(vmoney) {}


Trainer::Trainer(const string &vname){
    name = vname;
    badges = 0;
    level = 0;
    money = 800;

}


int Trainer::getbadges() const{ return badges;}
int Trainer::getpokedex() const{ return pokedex;}
int Trainer::getlevel() const{ return level;}
int Trainer::getmoney() const{ return money;}
int Trainer::getxp() const{return xp;}

string Trainer::getname() const{ return name;}

int Trainer::upmoney(unsigned int value){
    money += value;
    if(money >= 9999) return 9999;
    return money;
}

int Trainer::downmoney(unsigned int value){
    money -= value;
    if(money <= 0) return 0;
    return money;
}

int Trainer::uplevel(int vxp){
    int nec = (1000 + (level - 5) * (level - 5) * 100);
    if(xp < nec) return level;
    return level++; 
}

/*
bool Trainer::updex(Pokemon newpoke){
    return false; // make 
}
*/

int Trainer::upbad(int num){
    badges+=num;
    return badges;
}

int Trainer::upxp(unsigned int vxp){
    xp+=vxp;
    return 1;
}


void Trainer::add_team(Pokemon newpoke){
    
}
