#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{

    if (ac != 4)
    {
        std::cout << "Enter <filename> <s1> <s2> in the command line." << std::endl;
        return (1);
    }
    // ifstream to read from files
    // constructor that accepts const char *
    std::string filename(av[1]);

    std::ifstream myFile(filename);
    if (!myFile)
    {
        std::cerr << "Unable to open file." << std::endl;
        return (2);
    }
    std::string s1(av[2]);
    std::string s2(av[3]);
    std::string line;

    if (filename.empty() || s1.empty() || s2.empty())
    {
        std::cerr << "filename, s1 and s2 should not be empty" << std::endl;
        return (3);
    }

    std::ofstream dupFile(filename.append(" .replace"));

    while (std::getline(myFile, line))
    {
        size_t pos = line.find(s1);
        // std::string::npos => const static member of
        // std::string class in c++ used to indicate that no valid pos was found
        // or that an operation failed
        while (pos != std::string::npos)
        {
            // removes substring starting at position pos
            // spanning s1.length chars.
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            // starting from the pos of the newly inserted s2
            pos = line.find(s1, pos + s2.length());
        }
        dupFile << line << std::endl;
    }
    myFile.close();
    dupFile.close();
    return 0;
}