#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
    this->_name = name;
}

Zombie::~Zombie() {
    std::cout << this->_name << " defeated." << std::endl;
}

void    Zombie::getName(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void) {

    std::cout << _name << " : BraiiiiiiinnnzzzZ..."  << std::endl;
 }
