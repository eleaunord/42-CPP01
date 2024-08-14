#include "Zombie.hpp"

int	main(void){

    int N = 8;
	Zombie	*myHorde;

	myHorde = zombieHorde(N, "Peter");

    for (int i = 0; i < N; i++){
        myHorde[i].announce();
    }

	delete [] myHorde;

	return (0);
}