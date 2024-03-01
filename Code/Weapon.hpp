#include <iostream>
#include <string>
#pragma once

using namespace std;

class Weapon
{
    private : 
    string name; 
    int dammages;

    public :
    Weapon();
    Weapon(string newName, int newDammages);
    void update(string newName, int newDammages);
    void display();
    int getDammages() const;

};