#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(const std::string &_name = "");
    ~Zombie(void);
    void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif