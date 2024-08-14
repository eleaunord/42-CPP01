#include <iostream>
#include <string>

/*

reference = another var ; once init to a var it bcms an alternative name for that var

eg : reference to a string means we are not creating a new string but a new name that refers to the original string

NB : stringPTR holds the adress of str and so printing stringPTR is the same as printing the memory address it holds
*/

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory adress of string : " << &str << std::endl;
    std::cout << "Memory adress of stringPTR : " << &stringPTR << std::endl;
    std::cout << "Memory adress of stringREF : " << &stringREF << std::endl;
    
    std::cout << "Value of string : " << str << std::endl;
    std::cout << "Value pointed by stringPTR : " << stringPTR << std::endl;
    std::cout << "Value pointed by stringREF : " << stringREF << std::endl;

    return 0;
};