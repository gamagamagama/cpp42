/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:31:27 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 16:28:25 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void handleError(int type) {
    if(type == 1)
        std::cout << "Error: not enough arguments" << std::endl;
    if(type == 2)
        std::cout << "Error: too many arguments" << std::endl;
    if(type == 3)
        std::cout << "Error: file doesn't exist" << std::endl;
    if(type == 4)
        std::cout << "Error: technically valid but comon please you try to replace nothing with something so i will copy everything" << std::endl;
    if(type == 5)
        std::cout << "Error: technically valid but comon please you try to replace nothing with nothing so i will copy everything" << std::endl;
    if(type == 6)
        std::cout << "Error: you fucked up so hard that i can't even handle it so pleas do the world a favor and DIE!!!, Thank you" << std::endl;
    return;
    
}

std::string stringReplace(size_t pos, std::string line, std::string s1, std::string s2) 
{
    if (pos == std::string::npos)
        return line;
    line.erase(pos, s1.length());
    line.insert(pos, s2);
    return line;
}

void createNewFile(std::string fileName, std::string s1, std::string s2)
{
    std::fstream filein(fileName.c_str(), std::ios::in);
    std::fstream fileout((fileName + ".replace").c_str(), std::ios::out);
    std::string line;
 
    if(!s1.length() || (!s1.length() && !s2.length())) 
    {
        while(std::getline(filein, line))
            fileout << line << std::endl;
        if(!s1.length() && s2.length())
            handleError(4);
        else
            handleError(5);
        return;
    }
    while (getline(filein, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = stringReplace(pos, line, s1, s2);
            pos += s2.length();
        }
        fileout << line << std::endl;
    }
    filein.close();
    fileout.close();
}
void openFile(std::string fileName, std::string s1, std::string s2)
{    
    std::fstream filein(fileName.c_str(), std::ios::in);
    if(!filein.is_open() && (s1.length() || s2.length())) {
        handleError(3);
        return;
    }
    else if(!filein.is_open() && (!s1.length() || !s2.length())) {
        handleError(6);
        return;
    }
    createNewFile(fileName, s1, s2);
    filein.close();
}
void processInput(char **av1, char **av2, char **av3) {

    std::string fileName = *av1;
    std::string s1 = *av2;
    std::string s2 = *av3;
    openFile(fileName, s1, s2);
}

int main (int ac, char **av)
{
    if(ac == 4)
        processInput(&av[1], &av[2], &av[3]);
    else if(ac > 4)
        handleError(2);
    else if(ac < 4)
        handleError(1);
    else
        handleError(6);
    return 0;     
}