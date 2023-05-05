#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
    public:

    Contact();
    ~Contact();

    const std::string getFirstName();
    void setFirstName(std::string _firstName);
    
    const std::string getLastName();
    void setLastName(std::string _lastName);
    
    const std::string getNickname();
    void setNickname(std::string _nickname);
    
    const std::string getPhoneNb();
    void setPhoneNb(std::string _phoneNb);
    
    const std::string getDarkestSecret();
    void setDarkestSecret(std::string _darkestSecret);
    



    private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNb;
    std::string _darkestSecret;
};

/************FUNCTIONS************/
bool checkPhoneNb(std::string input);
bool checkName(std::string input);
#endif