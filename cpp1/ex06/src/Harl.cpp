/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:25:31 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/24 19:03:49 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
    std::cout << "[ DEBUG ]	";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]	";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]	";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]	";
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

//V1
void Harl::complain(std::string level) {
    typedef void (Harl::*funcPtr)();
    funcPtr func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int lvl = harlFilter(level);
    if (lvl == NONE) {
        std::cout << "Invalid complain" << std::endl;
        return;
    }
    for (int i = lvl; i < 4; ++i)
        (this->*func[i])();
}

//V1
int Harl::harlFilter(std::string level) {
    int lvl = NONE;
    
    if(level.compare("DEBUG") == 0)
        lvl = DEBUG;
    else if(level.compare("INFO") == 0)
        lvl = INFO;
    else if(level.compare("WARNING") == 0)
        lvl = WARNING;
    else if(level.compare("ERROR") == 0)
        lvl = ERROR;
    else {
        lvl = NONE;
    }
    switch(lvl)
    {
        case DEBUG:
            return (DEBUG);
        case INFO:
            return (INFO);
        case WARNING:
            return (WARNING);
        case ERROR:
            return (ERROR);
        default:
            return (NONE);
    }
    return (lvl);
}

/** V2
// void Harl::complain(std::string level, int lvl) {
//     typedef void (Harl::*funcPtr)();
//     (void)level;
//     funcPtr func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};	
//     for(int i = lvl; i < 4; i++)
//         (this->*func[i])(); 
//             return;
//     std::cout << "Invalid complain" << std::endl;
// }

void Harl::harlFilter(std::string level) 
{

    Compl lvl;
	
    if(level.compare("DEBUG") == 0)
        lvl = DEBUG;
    else if(level.compare("INFO") == 0)
        lvl = INFO;
    else if(level.compare("WARNING") == 0)
		lvl = WARNING;
    else if(level.compare("ERROR") == 0)
        lvl = ERROR;
    else {
		lvl = NONE;
	}
    switch(lvl)
    {
        case DEBUG:
            complain(level, lvl);
            break;
        case INFO:
            complain(level, lvl);
            break;
        case WARNING:
            complain(level, lvl);
            break;
        case ERROR:
            complain(level, lvl);
            break;
		case NONE:
			std::cout << "Invalid complain" << std::endl;
			break;
        default:
            std::cout << "Invalid complain" << std::endl;
            break;
    }
}
*/