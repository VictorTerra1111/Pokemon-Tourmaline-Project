#include <iostream>
#include <fstream>
#include <string>
#include <trainer.hpp>
#include "file_manage.hpp"
#include "team.hpp"

using namespace std;

Trainer ReadTrainerInfo(){
    string name; //variables for storing the data in the file save1.txt 
    int badges, money, level;

    ifstream infile; //file var
    infile.open("TXTS/save1.txt"); //open file

    if (!infile) { // testing if opening went well
        cerr << "ERROR IN FILE" << std::endl;
        Trainer missingno("file error");
        return missingno;
    }

    // Read the file line by line and store the data
    infile >> name >> badges >> money >> level;

    Trainer player(name, badges, level, money); // after reading data, creates the player again
    infile.close(); //close file
    
    return player;
}

bool WriteTrainerInfo(Trainer player){
    ofstream outfile("TXTS/save1.txt");
    if (!outfile) {
        cerr << "ERROR IN FILE" << endl;
        return false;
    }
    outfile << player.getname() << " ";
    outfile << player.getbadges() << " ";
    outfile << player.getmoney() << " ";
    outfile << player.getlevel() << endl;

    outfile.close();

    cout << "DATA SAVED" << endl;
    return true;
}

bool ReadTeamInfo(){
    ifstream infile("TXTS/team_save1.txt");
    if (!infile) {
        cerr << "ERROR IN FILE" << std::endl;
        return false;
    }
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
//  terminar leitura com while 
    
    return true; 
}

bool WriteTeamInfo(){
    return true;
}

