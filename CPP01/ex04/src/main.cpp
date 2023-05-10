/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:28:49 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/10 15:39:55 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/sed.hpp"

int main(int argc, char **argv)
{
    // std::ifstream file;

    if (argc > 1)
    {
        std::string full;
        std::cout << "argv : " << argv[1] << std::endl;
        std::ifstream file(argv[1]); // Open the file
        std::cout << "access return: " << access(argv[1], R_OK) << std::endl;
        std::cout << "file.is_open()? " << file.is_open() << std::endl;
        if (file.is_open())
        {
            std::cout << "file opened" << std::endl;
            std::string line;
            while (getline(file, line))
            {   
                // Read the file line by line;
                if(line[line.size() - 1] == '\n')
                    line[line.size() - 1] = ' ';
                full += line;
                // std::cout << line << std::endl; // Print each line
            }

            file.close(); // Close the file
            // std::string file = "In the quiet stillness of    the night, stars twinkle above, casting their gentle glow upon the Earth.\nA soft breeze whispers throu";
            // size_t len = 0;

            // std::string line;
            // std::cout << "len: " <<  len << std::endl;
            // full.find(argv[2]);
            size_t pos = full.find(argv[2]);
            if(pos == std::string::npos)
            {
                std::cout << "Not found" << std::endl;
                return 1;
            }
            std::cout << "found at pos: " << pos << std::endl;
            full.replace(pos, strlen(argv[2]), argv[3]);
            std::cout << full << std::endl;
        }

        Sed Sed;
        Sed = Sed("argv[1]", "argv[2]", "argv[3]");
        Sed =  Sed("argv[1]", "argv[2]", "argv[3]", "argv[4]");
        // ~Sed;
    }
}