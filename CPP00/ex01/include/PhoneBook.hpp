#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public:
    PhoneBook();
    ~PhoneBook();
    void    introduce(std::string name);

    const std::string getName() const;
    void setName(std::string name);
    
    std::string title;

    private:
    std::string _name;
};

#endif