#include <iostream>
#include <string>
#include "Character.cpp"
#include "Weapon.cpp"

using namespace std;

int main() 
{
    //an exemple of what we can do with the two created classes 

    Weapon EpeeEnBois;
    Weapon Ak47("Ak47", 20), Epée("Epée", 10) , MagicStaff("MagicStaff", 30), Bazooka("Bazooka", 80);
    
    Character geralt("geralt", 100, 100, Bazooka);
    Character yennefer("yennefer", 100, 100, Epée);

    Ak47.display();
    geralt.display();
    yennefer.display();

    geralt.attack(yennefer);
    cout << yennefer.isAlive() << endl;
    yennefer.display();
    yennefer.takeLifePotion(5);
    yennefer.switchWeapon("MagicStaff",30);
    yennefer.display();

    yennefer.attack(geralt);
    geralt.display();
    
    return 0;
}