/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:34:04 by mgavornik         #+#    #+#             */
/*   Updated: 2025/11/21 17:29:55 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

bool Contact::isNumber(const std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]) && str[i] != '+')
            return false;
    }
    return true;
}
bool Contact::isAlpha(const std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isalpha(str[i]) && !isspace(str[i]))
            return false;
    }
    return true;
}
bool Contact::isAlphaNum(const std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isalnum(str[i]) && !isspace(str[i]))
            return false;
    }
    return true;
}
bool Contact::isEmpty(const std::string& str)
{
    if (!str.empty())
        return false;
    return true;
}
std::string Contact::getFirstName() const { 
    return _first_name; 
}

std::string Contact::getLastName() const { 
    return _last_name; 
}

std::string Contact::getNickName() const { 
    return _nickname; 
}

std::string Contact::getPhoneNumber() const { 
    return _phone_number; 
}

std::string Contact::getDarkestSecret() const { 
    return _darkest_secret; 
}
void Contact::setContact(std::string first_name,
                std::string last_name, 
                std::string nickname, 
                std::string phone_number, 
                std::string darkest_secret)
                {
                    _first_name = first_name;
                    _last_name = last_name;
                    _nickname = nickname;
                    _phone_number = phone_number;
                    _darkest_secret = darkest_secret;
                }