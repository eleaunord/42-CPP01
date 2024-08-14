#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    private:
        static const std::string comments[];
        
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
};

// creates an alias for a pointer to a member function of the Harl class
typedef void(Harl::*PFnList)();

#endif