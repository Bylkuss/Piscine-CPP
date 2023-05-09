#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon();
    Weapon(std::string type);
    const std::string Weapon::getType() const;
    void setType(std::string type);
    ~Weapon();
};

#endif