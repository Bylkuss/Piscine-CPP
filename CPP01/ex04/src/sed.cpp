/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:29:54 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/10 16:13:19 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/sed.hpp"

Sed::Sed(/* args */)
{
}
Sed::Sed(std::string filePath, std::string s1, std::string s2)
{

    std::ifstream file(filePath); // Open the file
    try
    {
        if (file.is_open())
            std::cout << "file opened" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }
}

void Sed::setFullFile(std::string fullFile)
{
    this->_fullFile = fullFile;
}
std::string const Sed::getFullFile() const
{
    return this->_fullFile;
}

bool Sed::checkInput(std::string filePath)
{
    std::ifstream file(filePath); // Open the file
    std::string line;
    std::string str;

    if (!file.is_open())
        return false;
    while (std::getline(file, line))
    {
        str += line;
        str += "\n";
    }
    
    setFullFile(str);
    return true;
}

// Sed::Sed(std::string file, std::string output)
Sed::Sed(std::string file, std::string s1, std::string s2, std::string output)
{
    _fullFile = file;
    _output = output;
}
Sed::~Sed()
{
}
