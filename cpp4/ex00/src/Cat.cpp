/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:35:42 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 10:47:06 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow Ave Satan" << std::endl;
}
