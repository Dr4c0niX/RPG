#include <iostream>
#include <string>
#include "Weapon.hpp"
#pragma once

using namespace std;

class Character
{
private:
    string name;
    int life, mana;
    Weapon equipedWeapon;

public:
    Character();
    Character(string newName, int newLife, int newMana, Weapon newEquipedWeapon);
    void receiveDammages(int dammages);
    void attack(Character &target);
    void takeLifePotion(int lifePoints);
    void switchWeapon(string weaponName, int weaponDammages);
    bool isAlive();
    void display();
    ~Character();
};