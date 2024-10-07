#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "interface.hpp"
using namespace std;

int load_options(){
    int mode = 1;
    cout << "\033[2J\033[1;1H";
    cout << "==================================================" << endl;
    cout << "> Start                 - Options" << endl;
    cout << "- Quit                  - Credits" << endl;
    cout << "==================================================" << endl;
    string input;

    do{
        getline(cin, input);
        if(input == "s"){
            if(mode %2 == 0) mode--;
            else mode++;
        }
        else if(input == "w"){
            if(mode %2 != 0) mode++;
            else mode--;
        }
        else if(input == "d"){
            if(mode == 3 || mode == 4) mode-=2;
            else mode+=2;
        }
        else if(input == "a"){
            if(mode == 1 || mode == 2) mode +=2;
            else mode-=2;
        }
        else if(input.empty()) break;

        cout << "\033[2J\033[1;1H";

        if(mode == 1){
            cout << "==================================================" << endl;
            cout << "> Start                 - Options" << endl;
            cout << "- Quit                  - Credits" << endl;
            cout << "==================================================" << endl;
        }
        else if (mode == 2){
            cout << "==================================================" << endl;
            cout << "- Start                 - Options" << endl;
            cout << "> Quit                  - Credits" << endl;
            cout << "==================================================" << endl;
        }
        else if (mode == 3){
            cout << "==================================================" << endl;
            cout << "- Start                 > Options" << endl;
            cout << "- Quit                  - Credits" << endl;
            cout << "==================================================" << endl;
        }
        else if (mode == 4){
            cout << "==================================================" << endl;
            cout << "- Start                 - Options" << endl;
            cout << "- Quit                  > Credits" << endl;
            cout << "==================================================" << endl;
        }
    }while( input != "");
            
    return mode;
}

int print_load_screen(){
    string input;
    cout << "\033[2J\033[1;1H";

    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "==================================================" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "     ____       _     __                       " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "    |  _ \\ ___ | | __/_/ _ __ ___   ___  _ __  " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "    | |_) / _ \\| |/ / _ \\ '_ ` _ \\ / _ \\| '_ \\ " << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "    |  __/ (_) |   <  __/ | | | | | (_) | | | |" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "    |_|   \\___/|_|\\_\\___|_| |_| |_|\\___/|_| |_|" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << endl << "               EDGE & CORE version" << endl << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "press enter to start" << endl;
    cout << "==================================================" << endl;
    getline(cin, input);

    int load_box = load_options();


    return load_box;
}

bool yesORno_box(){
    string input;
    int mode = 1;
    cout << "\033[2J\033[1;1H";
    cout << "==================================================" << endl;
    cout << "Confirm action?" << endl;
    cout << "> Yes                 - No" << endl;
    cout << "==================================================" << endl;

    do{
        getline(cin, input);
        
        if(input == "d"){
            if(mode == 2) mode--;
            else mode++;
        }
        else if(input == "a"){
            if(mode == 1) mode ++;
            else mode--;
        }
        else if(input.empty() && mode == 2) return false;
        else if(input.empty() && mode == 1) return true;
        cout << "\033[2J\033[1;1H";

        if(mode == 1){
            cout << "==================================================" << endl;
            cout << "> Yes                 - No" << endl;
            cout << "Confirm action?" << endl;
            cout << "==================================================" << endl;
        }
        else if (mode == 2){
            cout << "==================================================" << endl;
            cout << "- Yes                 > No" << endl;
            cout << "Confirm action?" << endl;
            cout << "==================================================" << endl;
        }
    }while( input != "");
    return true;
}

void credits(){
    string input;
    cout << "\033[2J\033[1;1H";

    cout << "==================================================" << endl;
    cout << "Joao Victor Terra Pereira : everything" << endl;
    cout << "Press Enter to Exit" << endl;
    cout << "==================================================" << endl;
    cout << ">";
    getline(cin, input);
}


bool full_first_interface(){
    bool loop_load = true;
    while(loop_load){
        int load_box = print_load_screen();

        switch(load_box){
            case 1: loop_load = false; break;
            case 2: return false; // POR ENQUANTO
            case 3: cout << "No options for the moment" << endl; continue;
            case 4: credits(); continue;
            default: cout << "missingno." << endl; break;
        }
    }
    return true;
}
