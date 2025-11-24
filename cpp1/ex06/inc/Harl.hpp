/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:25:34 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/24 19:02:36 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
class Harl
{
    public:
        Harl();
        ~Harl();
        void    complain(std::string level); //V1
        int     harlFilter(std::string level); //V1
       // void	complain(std::string level, int lvl); //V2
      //  void    harlFilter(std::string level); //V2
    enum Compl {
        DEBUG = 0,
        INFO,
        WARNING,
        ERROR,
        NONE
    };
    private:
        void	debug(void);
        void	info(void);
        void	warning(void);
        void	error(void);
};

#endif
