/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:34:40 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/23 15:23:54 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): _contact_count(0)
{
    std::cout << "PB_Constructor" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PB_Destructor" << std::endl;
}


void PhoneBook::inputHandler(Fields field)
{
    if(field == EMPTY)
        std::cout << "Unknown command" << std::endl;       
}
void PhoneBook::AsciiArt(void)
{
    std::cout << "\n" 
    "...................../´¯/)\n" 
    "..................../¯../\n" 
    ".................../.../\n" 
    "................../.../.\n" 
    "................./.../.\n"
    "............./´¯/'../´¯¯`·¸\n" 
    "........../'/../.../......./¨¯\\\n" 
    "........('(...\'...\'.... ¯~/'...')\n"
    ".........\\.................\'.../\n"
    "..........''...\\.......... _.·´\n" 
    "............\\...IT'S NOT..(\n" 
    "..............\\..MINISHELL.\\\n"
    "...............\\..FUCK YOU..\\\n"
     << std::endl;
    
}
void PhoneBook::contactHeader(void) const
{
    Delimeter('=', "");
    Delimeter(' ', "PHONEBOOK");
    Delimeter('-', "");
    std::cout << std::right << std::setw(COL_WIDTH) << "index";
    std::cout << "|";
    std::cout << std::right << std::setw(COL_WIDTH) << "first name";
    std::cout << "|";
    std::cout << std::right << std::setw(COL_WIDTH) << "last name";
    std::cout << "|";
    std::cout << std::right << std::setw(COL_WIDTH) << "nickname";
    std::cout << "|";
    std::cout << std::endl;
    Delimeter('-', "");
}
static std::string formatField(const std::string& s, std::size_t width)
{
    if (s.length() > width) {
        return s.substr(0, width - 1) + '.';
    }
    return s;
}

void PhoneBook::ContactAlignment(Contact contact, size_t index) const
{
    Delimeter('=', "");
    std::cout << std::right << std::setw(COL_WIDTH) << index;
    std::cout << "|";
    std::cout << std::right << std::setw(COL_WIDTH) 
              << formatField(contact.getFirstName(), COL_WIDTH);
    std::cout << "|";
    std::cout << std::right << std::setw(COL_WIDTH) 
              << formatField(contact.getLastName(), COL_WIDTH);
    std::cout << "|";
    std::cout << std::right << std::setw(COL_WIDTH) 
              << formatField(contact.getNickName(), COL_WIDTH);
    std::cout << "|";
    std::cout << std::endl;
}


void PhoneBook::addContact()
{

    std::string first_name, last_name, nickname, phone_number, darkest_secret;
    
    do {
        std::cout << "First name: ";
        std::getline(std::cin, first_name);
        if (!Contact::isAlpha(first_name) || Contact::isEmpty(first_name)) 
        {
            if(std::cin.eof())
                return;
            std::cout << "First name must be alpha" << std::endl;
        }
    } while (!Contact::isAlpha(first_name) || Contact::isEmpty(first_name));
    
    do {
        std::cout << "Last name: ";
        std::getline(std::cin, last_name);
        if (!Contact::isAlpha(last_name) || Contact::isEmpty(last_name)) {
            
            if(std::cin.eof())
                return;
            std::cout << "Last name must be alpha" << std::endl;
        }
    } while (!Contact::isAlpha(last_name) || Contact::isEmpty(last_name));
    
    do {
        std::cout << "Nickname: ";
        std::getline(std::cin, nickname);
        if (!Contact::isAlphaNum(nickname) || Contact::isEmpty(nickname)) {
            if(std::cin.eof())
                return;
            std::cout << "Nickname could be only alphanumeric" << std::endl;
        }
    } while (!Contact::isAlphaNum(nickname) || Contact::isEmpty(nickname));
    
    do {
        std::cout << "Phone number: ";
        std::getline(std::cin, phone_number);
        if (!Contact::isNumber(phone_number) || Contact::isEmpty(phone_number)) {
            if(std::cin.eof())
                return;
            std::cout << "Phone number must be a number" << std::endl;
        }
    } while (!Contact::isNumber(phone_number) || Contact::isEmpty(phone_number));
    
    do {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, darkest_secret);
        if (!Contact::isAlphaNum(darkest_secret) || Contact::isEmpty(darkest_secret)) {
            if(std::cin.eof())
                return;
            std::cout << "Darkest secret could be alphanumeric" << std::endl;
        }
    } while (!Contact::isAlphaNum(darkest_secret) || Contact::isEmpty(darkest_secret));
    
    size_t last_index = (_contact_count < (size_t)MAX_CONTACTS) ? _contact_count : (size_t)MAX_CONTACTS -1;
    
    for (size_t i = last_index; i > 0; --i)
        _contacts[i] = _contacts[i - 1];
    
    _contacts[0].setContact(first_name, last_name, nickname, phone_number, darkest_secret);
   
    if (_contact_count < (size_t)MAX_CONTACTS)
        ++_contact_count;
    
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::processCmdADD(Commands Cmd)
{
    (void)Cmd;
    addContact();
}
void PhoneBook::displayContact(int index) const
{
    if (index < 0 || static_cast<size_t>(index) >= _contact_count) {
        std::cout << "Index out of range" << std::endl;
        return;
    }

    const Contact& c = _contacts[static_cast<size_t>(index)];
    std::cout << "First name: "    << c.getFirstName()    << std::endl;
    std::cout << "Last name: "     << c.getLastName()     << std::endl;
    std::cout << "Nickname: "      << c.getNickName()     << std::endl;
    std::cout << "Phone number: "  << c.getPhoneNumber()  << std::endl;
    std::cout << "Darkest secret: "<< c.getDarkestSecret()<< std::endl;
    
}

void PhoneBook::Delimeter(char c, const std::string& str) const
{
    int total = (COL_WIDTH * 5) - 5;
    int str_len = str.length();
    int l = (total - str_len) / 2;
    int r = total - l - str_len;
    std::cout << std::string(l, c)
              << str
              << std::string(r, c)
              << std::endl;
}

int getnum(const std::string& str) 
{
    if (!std::isdigit(str[0]) || str.length() != 1)
        return -1;    
    int num = 0;
    char c = str[0];
    if (c < '0' || c > '9')
        return -1;
    else
        num = num * 10 + (c - '0');
    return num;
}

void PhoneBook::processCmdSEARCH(Commands Cmd)
{
    (void)Cmd;
    size_t i =0;
    std::cout << "SEARCH\n"; 
    if (_contact_count == 0) {
        contactHeader();
        Delimeter('x', "- Phonebook is empty -");
        return;
    }
    else {
        contactHeader();
    }
    do {
        ContactAlignment(_contacts[i], i + 1);
        i++;
    }
    while( i < _contact_count);

    std::string strline;
    while (true ) {
        if (std::cin.eof())
            return;
        std::cout << "Enter index of the contact you want to see: ";
        std::getline(std::cin, strline);
        std::cout << strline << std::endl;
        int index = getnum(strline);
        if (index < 1 || index > (int) _contact_count) {
            std::cout << "Index out of range you bitch" << std::endl;
            continue;
        }
        displayContact((index - 1));
        return;
    }
}
void PhoneBook::processCmdEXIT(Commands Cmd)
{
    (void)Cmd;
    std::cout << "EXIT\n";
}
void PhoneBook::processCmd(std::string& cmd)
{
    Commands selectedCmd;
    
    if (cmd.compare("ADD") == 0) {
        selectedCmd = ADD;
    } else if (cmd.compare("SEARCH") == 0) {
        selectedCmd = SEARCH;
    } else if (cmd.compare("EXIT") == 0) {
        selectedCmd = EXIT;
    } else {
        inputHandler(EMPTY);
        return;
    }
    switch(selectedCmd)
    {
        case ADD:
            processCmdADD(ADD);
            break;
        case SEARCH:
            processCmdSEARCH(SEARCH);
            break;
        case EXIT:
            processCmdEXIT(EXIT);
            break;
        default:
            inputHandler(EMPTY);
            break;
    }
}
