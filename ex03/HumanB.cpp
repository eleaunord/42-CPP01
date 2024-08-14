#include "HumanB.hpp"

HumanB::HumanB(std::string initName) : name(initName), b_weapon(NULL)
{
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &newWeapon)
{
    b_weapon = &newWeapon;
}

void HumanB::attack() const
{
    if (!b_weapon)
        std::cout << this->name << " attacks with their bare hands" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->b_weapon->getType() << std::endl;
}