#ifndef CONTACT_HPP
# define CONTACT_HPP


#include "PhoneBook.hpp"
class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	Contact(void);
	Contact(std::string &firstName,
			std::string &lastName,
			std::string &nickName,
			std::string &phoneNumber,
			std::string &darkestSecret);
	~Contact(void);

	void setFirstName(std::string name);
	std::string getFirstName(void) const;
	void setLastName(std::string name);
	std::string getLastName(void) const;
	void setNickName(std::string name);
	std::string getNickName(void) const;
	void setPhoneNumber(std::string number);
	std::string getPhoneNumber(void) const;
	void setDarkestSecret(std::string secret);
	std::string getDarkestSecret(void) const;
};

/************FUNCTIONS************/
bool	checkPhoneNb(std::string input);
bool	checkName(std::string input);
#endif
