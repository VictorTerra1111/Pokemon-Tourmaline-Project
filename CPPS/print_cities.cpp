#include <iostream>
#include "print_cities.hpp"

using namespace std;

bool print_rosyan() {
    string input;
    string name = "ROSYAN";
    int mode = 0; 

    // List of city locations
    string locations[7] = { "Pokecenter", "Shop", "Maple's LAB", "My house", "Enemy's house", "Dust's house", "City's gate" };

    do {
        cout << "\033[2J\033[1;1H";
        cout << "==================================================" << endl;
        cout << "City: " << name << endl;

        for (int i = 0; i < 7; ++i) {
            if (i == mode) {
                cout << "\t> " << locations[i] << endl;
            } else {
                cout << "\t- " << locations[i] << endl;
            }
        }
        cout << "==================================================" << endl;

        getline(cin, input);

        if (input == "w") {
            mode = (mode == 0) ? 6 : mode - 1;  // Move up
        }
        else if (input == "s") {
            mode = (mode == 6) ? 0 : mode + 1;  // Move down
        }
        else if (input.empty()) {
            switch (mode) {
                case 0: cout << "Going to Pokecenter...\n"; break;
                case 1: cout << "Entering Shop...\n"; break;
                case 2: cout << "Entering Maple's LAB...\n"; break;
                case 3: cout << "Entering My house...\n"; break;
                case 4: cout << "Entering Enemy's house...\n"; break;
                case 5: cout << "Entering Dust's house...\n"; break;
                case 6: cout << "Entering City's gate...\n"; break;
            }
            return true;
        }

    } while (true);

    return true;
}

bool print_city(string cityName, string location1, string location2, string location3) {
    string input;
    int mode = 0; 

    // Primeiros três e o último locais são fixos
    string locations[7] = { "Pokecenter", "Shop", "Pokemon Gym", location1, location2, location3, "City's gate" }; 

    do {
        cout << "\033[2J\033[1;1H";
        cout << "==================================================" << endl;
        cout << "City: " << cityName << endl;

        // Imprime o menu com ">" no local selecionado
        for (int i = 0; i < 7; ++i) {
            if (i == mode) {
                cout << "\t> " << locations[i] << endl;
            } else {
                cout << "\t- " << locations[i] << endl;
            }
        }
        cout << "==================================================" << endl;

        getline(cin, input);

        if (input == "w") {
            mode = (mode == 0) ? 6 : mode - 1;  // Move para cima
        }
        else if (input == "s") {
            mode = (mode == 6) ? 0 : mode + 1;  // Move para baixo
        }
        else if (input.empty()) {
            switch (mode) {
                case 0: cout << "Going to Pokecenter...\n"; break;
                case 1: cout << "Entering Shop...\n"; break;
                case 2: cout << "Entering Pokemon Gym...\n"; break;
                case 3: cout << "Entering " << location1 << "...\n"; break;
                case 4: cout << "Entering " << location2 << "...\n"; break;
                case 5: cout << "Entering " << location3 << "...\n"; break;
                case 6: cout << "Entering City's gate...\n"; break;
            }
            return true;
        }

    } while (true);

    return true;
}

bool print_factory(){
    string input;
    int mode = 0; 

    // List of city locations
    string locations[7] = { "Hospital", "Shop", "0-sdj19?4tD#", "Atomic grunt", "Old Room", "Cemitery", "Door out" };

    do {
        cout << "\033[2J\033[1;1H";
        cout << "==================================================" << endl;
        cout << "FACTORY" << endl;

        for (int i = 0; i < 7; ++i) {
            if (i == mode) {
                cout << "\t> " << locations[i] << endl;
            } else {
                cout << "\t- " << locations[i] << endl;
            }
        }
        cout << "==================================================" << endl;

        getline(cin, input);

        if (input == "w") {
            mode = (mode == 0) ? 6 : mode - 1;  // Move up
        }
        else if (input == "s") {
            mode = (mode == 6) ? 0 : mode + 1;  // Move down
        }
        else if (input.empty()) {
            switch (mode) {
                case 0: cout << "Going to Hospital...\n"; break;
                case 1: cout << "Entering Shop...\n"; break;
                case 2: cout << "Cmdoaj12*#d 0-sdj19?4tD#...\n"; break;
                case 3: cout << "Walking to Atomic grunt...\n"; break;
                case 4: cout << "Entering Old Room...\n"; break;
                case 5: cout << "Entering Cemitery...\n"; break;
                case 6: cout << "You left the factory...\n"; break;
            }
            return true;
        }

    } while (true);

    return true;
}

bool print_league(){
    // Metal  Rock  Poison Dark

    string input;
    int mode = 0; 

    // List of city locations
    string locations[4] = { "Ghinny", "Loona", "Mark", "Jhissy" };

        cout << "\033[2J\033[1;1H";
        cout << "==================================================" << endl;
        cout << "1) " << locations[1]; //DEPENDE DE BATALHA
        cout << "==================================================" << endl;
        
        getline(cin, input);


    return true;
}