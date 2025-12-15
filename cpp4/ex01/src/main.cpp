/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:31:05 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/15 18:57:00 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// int ma
// in()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// const Animal* l = new Cat();
// const WrongAnimal* k = new WrongCat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// std::cout << k->getType() << " " << std::endl;
// std::cout << l->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// k->makeSound();
// meta->makeSound();
// l->makeSound();

// delete meta;
// delete j;
// delete i;
// delete k;
// delete l;
// return 0;
// }

int main()
{
    const int n = 4;
    const Animal* animals[n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            animals[i] = new Dog();
            animals[i]->getBrain()->setIdeas("Dog idea", i);
        }
        else
        {
            animals[i] = new Cat();
            animals[i]->getBrain()->setIdeas("Cat idea", i);
        }
    }
    for (int i = 0; i < n; i++)
    {
        //std::cout << "Type: " << animals[i]->getType() << " -> ";
        
        animals[i]->makeSound();
        std::cout << animals[i]->getBrain()->getIdeas(i) << std::endl;
    }
    
    for (int i = 0; i < n; i++)
        delete animals[i];

    Cat caty;
    Dog doggy;
    Dog dogy2(doggy);

    std::cout << "caty:" << &caty << "\n" << "doggy:"<< &doggy << std::endl;
    doggy.getBrain()->setIdeas("doggy idea", 0);
    caty.getBrain()->setIdeas("caty idea", 1);
    dogy2.getBrain()->setIdeas("doggy2 idea", 0);

    std::cout << "dogy2 :" << &dogy2 << std::endl;
    std::cout << "dogy2 idea: " << dogy2.getBrain()->getIdeas(0) << std::endl;

    std::cout << "Cat idea: " << caty.getBrain()->getIdeas(0) << std::endl;
    std::cout << "Dog idea: " << doggy.getBrain()->getIdeas(0) << std::endl;
    std::cout << "Cat idea: " << caty.getBrain()->getIdeas(1) << std::endl;
    std::cout << "Dog idea: " << doggy.getBrain()->getIdeas(1) << std::endl;

    return 0;
}

