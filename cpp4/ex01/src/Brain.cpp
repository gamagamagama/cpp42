/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:05:18 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 13:37:13 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assignment operator called" << std::endl;
    for(int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
    return *this;
}

