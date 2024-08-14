#include "HumanA.hpp"

/*

 name(name), weapon(weapon): initializer list, used to init member var
 before the constructor's body is executed

*/

HumanA::HumanA(std::string initName, Weapon &initWeapon) : name(initName), weapon(initWeapon)
{
}

HumanA::~HumanA() {}

void HumanA::attack() const
{

    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

