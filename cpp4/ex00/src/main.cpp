/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:31:05 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/09 17:20:44 by mgavorni         ###   ########.fr       */
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
const Animal* animalium = new Animal();
const Animal* dogo = new Dog();
const Animal* caty = new Cat();
const Animal* caty2 = new Cat();

std::cout << "wrong ahead \n" << std::endl;

// const WrongAnimal* badcaty = new WrongCat();
// const WrongAnimal* wronganimalium = new WrongAnimal(badcaty->getType());


    const WrongAnimal *wa = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();
    std::cout << wa->getType() << " " << std::endl;
    std::cout << wc->getType() << " " << std::endl;
    wa->makeSound();
    wc->makeSound();
    std::cout << std::endl;


std::cout << dogo->getType()<< std::endl;
std::cout << caty->getType()<< std::endl;
// std::cout << badcaty->getType()<< std::endl;
std::cout << caty2->getType()<< std::endl;

dogo->makeSound();
caty->makeSound();
// badcaty->makeSound();
caty2->makeSound();

animalium->makeSound();
// wronganimalium->makeSound();

delete dogo;
delete caty;
// delete badcaty;
delete caty2;
delete animalium;
delete wa;
delete wc;
// delete wronganimalium;
return 0;
}
