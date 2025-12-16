/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:31:05 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/16 14:49:28 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Colors.hpp"

int main()
{


std::cout << "wrong ahead \n" << std::endl;

const WrongAnimal *wronganimalium = new WrongAnimal();
const WrongAnimal *wrongcat = new WrongCat();


std::cout << wronganimalium->getType() << " " << std::endl;
std::cout << wrongcat->getType() << " " << std::endl;
wronganimalium->makeSound();
wrongcat->makeSound();
std::cout << std::endl;

const Animal* animalium = new Animal();
const Animal* dogo = new Dog();
const Animal* caty = new Cat();
const Animal* caty2 = new Cat();

std::cout << animalium->getType()<< std::endl;
std::cout << dogo->getType()<< std::endl;
std::cout << caty->getType()<< std::endl;
std::cout << caty2->getType()<< std::endl;

dogo->makeSound();
caty->makeSound();
caty2->makeSound();

animalium->makeSound();


delete dogo;
delete caty;
delete caty2;
delete animalium;
delete wronganimalium;
delete wrongcat;
return 0;
}
