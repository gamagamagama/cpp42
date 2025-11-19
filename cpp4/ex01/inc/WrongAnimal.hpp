/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:50:00 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 10:58:23 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        virtual ~WrongAnimal();

        virtual void makeSound() const; 
        std::string getType() const;
};

#endif
