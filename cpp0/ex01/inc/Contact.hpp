/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:41:52 by mgavornik         #+#    #+#             */
/*   Updated: 2025/11/10 09:43:36 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>


/**
    first name, last name, nickname, phone number, and
    darkest secret. A saved contact can’t have empty fields
*/
class Contact
{
    public:
        Contact();
        ~Contact();
        
        void setContact(std::string first_name,
                        std::string last_name, 
                        std::string nickname, 
                        std::string phone_number, 
                        std::string darkest_secret);
        static bool isEmpty(const std::string& str);
        static bool isAlpha(const std::string& str);
        static bool isNumber(const std::string& str);
        static bool isAlphaNum(const std::string& str);
    
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
    private:
        std::string _first_name, 
                    _last_name, 
                    _nickname, 
                    _phone_number, 
                    _darkest_secret;
};

#endif