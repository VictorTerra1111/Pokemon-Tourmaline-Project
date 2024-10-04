#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>

#include "trainer.hpp"
#include "first_partner.hpp"
#include "file_manage.hpp"

using namespace std;

Pokemon professor_dialogue(){
    string input; 
    string enemy_name;

    cout << "\033[2J\033[1;1H";
    cout << "==================================================" << endl;
    cout << "???" << endl;
    cout << "\tHello! Welcome to the world of Pokemon!" << endl << "\tI am professor Maple. " << endl;
    cout << "==================================================" << endl;
    getline(cin, input);
    cout << "\033[2J\033[1;1H";
    cout << "==================================================" << endl;

    cout << "PROFESSOR MAPLE" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\tThis world is inhabited by creatures called" << endl << "\tPOKEMON!" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\tFor some people, POKEMON are pets." << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\tOthers use them for fights." << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\tI like to study them!" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "==================================================" << endl;

    getline(cin, input);
    cout << "\033[2J\033[1;1H";
    cout << "==================================================" << endl;

    cout << "PROFESSOR MAPLE" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\tBut first, what is your name?" << endl;
    cout << "==================================================" << endl << ">";
    
    string name;
    cin >> name; // GET NAME FOR CREATING TRAINER PLAYER
    Trainer player(name);
    WriteTrainerInfo(player);


    cout << "\033[2J\033[1;1H";
    cout << "==================================================" << endl;
    cout << "PROFESSOR MAPLE" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout  << "\t" << name << ", huh? Great name! Oh, by the way," << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\tthere is someone I want to present to you," << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\this name is... Uh, what was it?" << endl;
    cout << "==================================================" << endl << ">";

    cin >> enemy_name; // GET NAME FOR CREATING ENEMY TRAINER

    cout << "\033[2J\033[1;1H";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "==================================================" << endl;
    cout << "PROFESSOR MAPLE" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\tOh, " << enemy_name << "! Yes of course. " << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\tWell, what are you wating for?" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "\tYour Pokemon journey starts NOW!" << endl;
    cout << "==================================================" << endl;
    getline(cin, input);
    
    Pokemon partner = first_partner();

    cout << "\033[2J\033[1;1H";
    cout << "==================================================" << endl;
    cout << "\tYou choose " << partner.getname() << "!" << endl;
    cout << "(" << partner.getname() << " will be added to your team)" << endl;
    cout << "==================================================" << endl;   

    return partner;

}