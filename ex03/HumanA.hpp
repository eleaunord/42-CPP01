#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"
/*

Takes weapon in the constructor
Always armed

HumanA(std::string name, Weapon& weapon)
=> public constructor that initializes a HumanA object with a name
and a ref to a Weapon object
The constructor takes a reference to a Weapon (Weapon&)
to ensure that HumanA is always association with a valid weapon
when it is created

void attack() const;
=> const means it will not modify the state of the HumanA object.
It ensures that member variables cannot be changed w/n this method

*/

class HumanA
{
private:
    std::string name;
    Weapon &weapon;
    HumanA();

public:
    HumanA(std::string initName, Weapon &initWeapon);
    ~HumanA();
    void attack() const;
};

#endif