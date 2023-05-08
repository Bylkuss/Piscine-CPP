/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:49:42 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/08 13:06:42 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

/*******COLORS******/
# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_YELLOW "\033[33m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_WHITE "\033[37m"
# define COLOR_CYAN "\033[36m"

class PhoneBook
{
  public:
	PhoneBook(void);
	~PhoneBook(void);

	void prompt(void) const;
	void add(void);
	void add_contact(std::string FirstName,
						std::string LastName,
						std::string NickName,
						std::string PhoneNumber,
						std::string Secret);
	void search(void) const;
	void free_contacts(void);

  private:
	Contact _contacts[8];
	void _show_contact(int index) const;
	int _index;
	int _count;
	void _check_index(void);
	void _set_userinput(int column, std::string message,
			void (Contact::*f)(std::string));
	std::string _truncate(std::string input) const;
	static int const _WIDTH = 10;
};

void	introduce_me(std::string name);
std::string getFullName(std::string input);
std::string getPhoneNb(std::string input);
#endif