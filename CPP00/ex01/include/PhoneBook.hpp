#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public:
    PhoneBook();
    PhoneBook(std::string name, size_t age);
    ~PhoneBook();

    void    introduce();
    void    introduce(std::string name);
    void    introduce(std::string name, size_t age);

    const std::string getName() const;
    void setName(std::string name);
    
    std::string title;

    private:
    std::string _name;    size_t _age;
};

void    introduce_me(std::string name);
std::string getFullName(std::string input);
std::string getPhoneNb(std::string input);
#endif