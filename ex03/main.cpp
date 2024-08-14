#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*
Using a reference : Immutability/Constant Association
if HumanA always uses the same Weapon, and that weapon is guaranteed to exist as long as HumanA does, a reference is ideal. This design ensures that HumanA always has a valid Weapon and cannot accidentally be associated with no weapon or a different weapon.
Using a pointer : Flexibility/Optional Association
if HumanB might start without a weapon or might switch between different weapons over time, using a pointer is the right choice. The setWeapon method allows the weapon to be changed, and the pointer can be set to nullptr to indicate no weapon.
*/

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}