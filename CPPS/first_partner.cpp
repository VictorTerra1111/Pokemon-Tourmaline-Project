#include <iostream>
#include <chrono>
#include <thread>
#include "pokemon.hpp"
#include "first_partner.hpp"

using namespace std;

Pokemon first_partner()
{
    Pokemon partner;
    string input;

    bool choose = true;

    Pokemon magby("Magby", "fire");
    Pokemon fomantis("Fomantis", "grass");
    Pokemon horsea("Horsea", "water");

    cin.clear();
    cout << "\033[2J\033[1;1H";

    cout << "==================================================" << endl;
    cout << "PROFESSOR MAPLE" << endl;

    this_thread::sleep_for(chrono::milliseconds(1000)); // Pause for effect

    cout << "\tOk! Now, you have to choose" << endl;
    cout << "\tyour first PARTNER!" << endl;
    cout << "> See options (press enter)" << endl;
    cout << "==================================================" << endl;

    getline(cin, input); // Wait for input to continue (press Enter)

    while (choose)
    {
        if (choose == false)
            break;
        int pick;
        string answer;
        cin.clear();
        cout << "\033[2J\033[1;1H";

        cout << "==================================================" << endl;

        cout << "(type 1, 2 or 3)" << endl;

        this_thread::sleep_for(chrono::milliseconds(1000)); // Pause for effect

        cout << "\t1) " << magby.getname() << "! The live coal Pokémon." << endl;

        this_thread::sleep_for(chrono::milliseconds(1000)); // Pause for effect

        cout << "\t2) " << horsea.getname() << "! The dragon Pokémon." << endl;

        this_thread::sleep_for(chrono::milliseconds(1000)); // Pause for effect

        cout << "\t3) " << fomantis.getname() << "! The sickle grass Pokémon." << endl;

        this_thread::sleep_for(chrono::milliseconds(1000)); // Pause for effect

        cout << "==================================================" << endl;

        cout << ">";

        cin >> pick;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear any extra newline

        cout << "\033[2J\033[1;1H";

        switch (pick)
        {
        case 1:
            cout << "==================================================" << endl;
            cout << magby.getname() << endl
                 << "Type: " << magby.gettype() << endl;
            cout << "Would you like to choose " << magby.getname() << "? (yes or no)" << endl;
            cout << "==================================================" << endl
                 << ">";

            cin >> answer;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear any extra newline

            if (answer == "yes")
            {
                choose = false;
                partner = magby;
                return partner; // Exit loop and return chosen partner
            }
            break;

        case 2:
            cout << "==================================================" << endl;
            cout << horsea.getname() << endl
                 << "Type: " << horsea.gettype() << endl;
            cout << "Would you like to choose " << horsea.getname() << "? (yes or no)" << endl;
            cout << "==================================================" << endl
                 << ">";

            cin >> answer;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear any extra newline

            if (answer == "yes")
            {
                choose = false;
                partner = horsea;
                return partner; // Exit loop and return chosen partner
            }
            break;

        case 3:
            cout << "==================================================" << endl;
            cout << fomantis.getname() << endl
                 << "Type: " << fomantis.gettype() << endl;
            cout << "Would you like to choose " << fomantis.getname() << "? (yes or no)" << endl;
            cout << "==================================================" << endl
                 << ">";

            cin >> answer;
            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear any extra newline

            if (answer == "yes")
            {
                choose = false;
                partner = fomantis;
                return partner; // Exit loop and return chosen partner
            }
            break;

        default:
            cout << "You have to enter a valid number to choose! " << endl;
            break;
        }
    }

    return partner;
} // end of function
