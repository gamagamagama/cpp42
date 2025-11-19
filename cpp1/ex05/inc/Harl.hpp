/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:25:34 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/14 12:57:56 by mgavorni         ###   ########.fr       */
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
        void	complain(std::string level);
    private:
        void	debug(void);
        void	info(void);
        void	warning(void);
        void	error(void);
};

#endif
