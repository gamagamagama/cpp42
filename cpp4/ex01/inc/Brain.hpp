/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:02:37 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 13:37:27 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain& other); //cpy constructor
        Brain& operator=(const Brain& other); //cpy assig
};

#endif
