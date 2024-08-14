#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>

// Does not take the weapon in the constructor
// Not always armed
/*

Declaring a default constructor as private to prevent the 
creation of objects using that constructor
=> prevent the creation of Human object without specifying a name


*/
class HumanB {
    private :
        std::string name;
        Weapon* b_weapon;
        HumanB();
    public :
        HumanB(std::string initName);
        ~HumanB();
        void attack() const;
        void setWeapon(Weapon& newWeapon);
};


#endif