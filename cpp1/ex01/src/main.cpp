/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:34:02 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 15:53:49 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool validNum(const std::string &str) {
    if (str.empty()) return false;
    for (std::string::size_type i = 0; i < str.size(); ++i) {
        if (!std::isdigit(static_cast<unsigned char>(str[i])))
            return false;
    }
    return true;
}

int getNum(const std::string& str) 
{
    if (!validNum(str))
        return -1;
    int i = 0, num = 0;    
    while (str[i] >= '0' && str[i] <= '9') {
        num = num * 10 + (str[i] - '0');
        ++i;
    }
    return num;
}

std::string getStr(const std::string& msg) {
    std::string str;
    std::cout << msg;
    std::getline(std::cin, str);
    return (str);
}

int main()
{
    std::string c;
    c = getStr("Enter number of zombies: ");
    int N = getNum(c);
    Zombie *horde, *secondHorde;
    horde = zombieHorde(N, "Horde");
    secondHorde = zombieHorde(N, "SecondHorde");
    for (int i = 0; i < N; ++i)
    {
        horde[i].announce(); 
        secondHorde[i].announce();
    }
    delete[] horde;
    delete[] secondHorde;
    return (0);
}


