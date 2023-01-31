/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 11:56:03 by justinmorne       #+#    #+#             */
/*   Updated: 2023/01/30 21:55:38 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void replace(char ** argv, std::string str)
{
    std::ofstream	outfile;
    int pos = 0;

	outfile.open((std::string(argv[1]) + ".replace").c_str());
    if (outfile.fail())
        return ;
    for (unsigned int i = 0; i < str.size(); i++)
    {
        pos = str.find(argv[2], i);
        if (pos != 1 && pos == (int)i)
        {
            outfile << argv[3];
            i += std::string(argv[2]).size() - 1;
        }
        else
            outfile << str[i];
    }
    outfile.close();
}

int main(int argc, char ** argv) 
{
    char            c;
    std::ifstream   infile;
    std::string     str;

    if (argc != 4)
    {
        std::cout << "Il faut 4 arguments dans cette ordre : <file> old_word new_world" << std::endl;
        return (1);
    }
    infile.open(argv[1]);
    if (infile.fail())
    {
        std::cout << "Error : " << argv[1] << " : " << "no such file or directory" << std::endl;
        return (1);
    }
    while (!infile.eof() && infile >> std::noskipws >> c)
        str += c;
    infile.close();
    replace(argv, str);
    return 0;
}