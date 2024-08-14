#include "Harl.hpp"

int main(int argc, char **argv)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int level = 5;
    Harl harl;

    if (argc != 2)
    {
        std::cout << "Usage: ./harlFilter < level DEBUG, INFO, WARNING, or ERROR: >" << std::endl;
        return (1);
    }
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == std::string(argv[1]))
        {
            level = i;
            break;
        }
    }
    switch (level)
    {
    case 0:
        harl.complain("DEBUG");
        std::cout << std::endl;
    case 1:
        harl.complain("INFO");
        std::cout << std::endl;
    case 2:
        harl.complain("WARNING");
        std::cout << std::endl;
    case 3:
        harl.complain("ERROR");
        std::cout << std::endl;
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
