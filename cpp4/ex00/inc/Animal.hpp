/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:21:06 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 10:46:40 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
};

#endif
