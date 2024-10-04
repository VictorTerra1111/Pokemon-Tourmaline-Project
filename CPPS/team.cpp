#include <iostream>
#include <string>
#include "team.hpp"
#include "pokemon.hpp"

using namespace std;


ArrayList::ArrayList(){
    max = 6;
    num = 0;
    list = new Pokemon[max];
}

ArrayList::~ArrayList(){
    clear();
}

void ArrayList::ArrayList::clear(){
    delete[] list;
    num = 0;
}

int ArrayList::size() const { return num; }
bool ArrayList::isFull() const { return num == max; }
bool ArrayList::isEmpty() const { return num == 0; }

bool ArrayList::add(const Pokemon e)
{
    if (isFull())
        return false;
    list[num] = e;
    ++num;
    cout << e.getname() << " was added to your party" << endl;
    return true;
}

bool ArrayList::add(const int index, const Pokemon e)
{
    if (isFull() || index < 0 || index > num)
        return false;
    for (int i = num; i > index; --i)
        list[i] = list[i - 1];
    list[index] = e;
    ++num;
    return true;
}

bool ArrayList::get(const int index, Pokemon &e)
{
    if (isEmpty() || index < 0 || index >= num)
        return false;
    e = list[index];
    return true;
}

bool ArrayList::set(const int index, const Pokemon &e)
{
    if (index < 0 || index >= num)
        return false;
    list[index] = e;
    return true;
}

bool ArrayList::remove(int index)
{
    if (index < 0 || index >= num)
        return false;
    --num;
    for (int i = index; i < num; ++i)
        list[i] = list[i + 1];
    return true;
}

bool ArrayList::contains(const Pokemon &e)
{
    string name = e.getname();

    for (int i = 0; i < num; i++)
    {
        string name_list = list[i].getname();
        if (name_list == name)
            return true;
    }
    return false;
}

