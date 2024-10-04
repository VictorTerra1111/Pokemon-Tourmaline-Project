#include <iostream>
#include <fstream>
#include <string>
#include "pokemon.hpp"
#include "trainer.hpp"
#include "interface.hpp"
#include "professor_dialogue.hpp"
#include "first_partner.hpp"
#include "team.hpp"
#include "file_manage.hpp"

using namespace std;

int main(){
    
    if(!full_first_interface()) return 0;
    
    Pokemon partner = professor_dialogue();
    ArrayList poke_team;
    poke_team.add(partner);
    partner.upload();

    return 0;
}