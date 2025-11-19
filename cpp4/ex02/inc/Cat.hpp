/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:25:06 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 13:26:11 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& other); //cpy constructor
        Cat& operator=(const Cat& other); //cpy assig
        void makeSound() const;
};

#endif

