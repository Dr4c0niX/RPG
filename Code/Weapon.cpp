#include "Weapon.hpp"

using namespace std;

Weapon::Weapon()
{
    name = "Epée en bois";
    dammages = 10;
}

Weapon::Weapon(string newName, int newDammages)
{
    name = newName;
    dammages = newDammages;
}

void Weapon::update(string newName, int newDammages)
{
    name = newName;
    dammages = newDammages;
}

void Weapon::display()
{
    cout << "Name : " << name << endl;
    cout << "Dammages : " << dammages << endl;
}   

int Weapon::getDammages() const
{
    return dammages;
}