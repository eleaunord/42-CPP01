#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie	*newZombie;

	newZombie = new Zombie[N];

    for (int i = 0; i < N; i++){
        newZombie[i].getName(name);
    }

	return (newZombie);
}