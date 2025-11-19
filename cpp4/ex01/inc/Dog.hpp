/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:23:19 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 13:21:27 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

    public:
        Dog();
        ~Dog();
        Dog(const Dog& other); //cpy constructor
        Dog& operator=(const Dog& other); //cpy assig
        void makeSound() const;
    private:
        Brain* _brain;
};

#endif
