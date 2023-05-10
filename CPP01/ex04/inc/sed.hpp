/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:27:08 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/10 16:12:16 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>

class Sed
{
    private:
        std::string _fullFile;
        std::string _output;
        /* data */
    public:
        Sed(/* args */);
        Sed(std::string filePath, std::string s1, std::string s2);
        Sed(std::string file, std::string s1, std::string s2, std::string output);
        ~Sed();

        std::string const   getFullFile() const;
        void               setFullFile(std::string fullFile);

        void                replace(std::string s1, std::string s2);
        bool checkInput(std::string filePath);
        const bool checkStrings(std::string filePath) const;
};

/* ***** COLORS ***** */
# define RESET "\e[0m"
# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGREEN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLUE "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYAN "\e[1;36m"
# define BWHT "\e[1;37m"

#endif




