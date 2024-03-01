#include "Character.hpp"

using namespace std;

Character::Character()
{
    life, mana = 100;
    name = "";
}

Character::Character(string newName, int newLife, int newMana, Weapon newEquipedWeapon)
{
    name = newName;
    life = newLife;
    mana = newMana;
}

void Character::receiveDammages(int dammages)
{
    life -= dammages;
    if (life < 0) 
    {
        life = 0;
    }
}

void Character::attack(Character &target) //&target for not taking a copy
{
    target.receiveDammages(equipedWeapon.getDammages());
}

void Character::takeLifePotion(int lifePoints)
{
    life += lifePoints; //We can also do :  receiveDammages(-lifePoints);
    if (life > 100)
    {
        life = 100;
    }
}

bool Character::isAlive()
{
   return life > 0;
}


void Character::switchWeapon(string weaponName, int weaponDammages)
{
    equipedWeapon.update(weaponName, weaponDammages);
}

void Character::display()
{
    cout << "Name : " << name << endl;
    cout << "Life : " << life << endl;
    cout << "Mana :" << mana << endl;
    equipedWeapon.display();
}

Character::~Character()
{

};