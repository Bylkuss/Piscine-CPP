/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:28:49 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/11 17:48:32 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/sed.hpp"

void	error(int error)
{
	if (error == 1)
		std::cout << "Wrong argument" << std::endl;
	else if (error == 2)
		std::cout << "Error opening file" << std::endl;
	exit(0);
}

void	open_input(const char *fd, std::ifstream &input)
{
	input.open(fd);
	if (input.is_open() == false)
		error(2);
}

void	replace_occurance(std::string &str, std::string s1, std::string s2)
{
	if (str.find(s1) != std::string::npos)
	{
		int pos = str.find(s1);
		str.erase(pos, s1.length());
		str.insert(pos, s2);
	}
}

std::string	input_content(std::ifstream &input, std::string s1, std::string s2)
{
	std::string content;
	std::string full_content;

	while (1)
	{
		if (getline(input, content))
		{
			replace_occurance(content, s1, s2);
			full_content.append(content);
			full_content.append("\n");
		}
		else
			break;
	}
	return (full_content);
}


void	create_output(char *filename, std::ofstream &output)
{
	std::string new_filename = filename;
	std::string replace = new_filename + ".replace";
	output.open(replace);
	if (output.is_open() == false)
		error(2);
}

int main (int argc, char **argv)
{

	if (argc != 4)
		error(1);
	std::ifstream input;
	std::ofstream output;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	open_input(argv[1], input);
	std::string content = input_content(input, s1, s2);
	create_output(argv[1], output);
	output << content << std::endl;
	return 0;
}
