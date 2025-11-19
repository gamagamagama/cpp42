/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:31:05 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 12:59:08 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const Animal* l = new Cat();
const WrongAnimal* k = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
std::cout << l->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
k->makeSound();
meta->makeSound();
l->makeSound();

delete meta;
delete j;
delete i;
delete k;
delete l;
return 0;
}
