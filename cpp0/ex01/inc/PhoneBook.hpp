/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:26:55 by mgavornik         #+#    #+#             */
/*   Updated: 2025/11/21 17:30:12 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iomanip>

#define MAX_CONTACTS 8

class PhoneBook
{
    public:
        PhoneBook(); 
        ~PhoneBook();
            
        enum Fields {
            FIRST_NAME = 0,
            LAST_NAME,
            NICKNAME,
            PHONE_NUMBER,
            DARKEST_SECRET,
            EMPTY,
            COUNT
        };
        
        enum Commands {
            ADD = 0,
            SEARCH,
            EXIT
        };
        void inputHandler(Fields field);
        void addContact();
        void processCmd(std::string& cmd);
        void processCmdADD(Commands cmd);
        void processCmdSEARCH(Commands cmd);
        void processCmdEXIT(Commands cmd);
        void ContactAlignment(Contact contact, size_t index) const;
        void Delimeter(char c, const std::string& str) const;
        
    private:
        enum {COL_WIDTH = 10};
        Contact _contacts[MAX_CONTACTS];
        size_t  _contact_count;
        void contactHeader() const; 
        void displayContact(int index) const;
};

#endif