#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Colors.hpp"

int main()
{
    const int n = 4;
    const Animal* animals[n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            animals[i] = new Dog();
           // animals[i]->getBrain()->setIdeas("Dog idea", i); //setting ideas when creating a new animal(Dog) in array
        }
        else
        {
            animals[i] = new Cat();
           // animals[i]->getBrain()->setIdeas("Cat idea", i); //setting ideas when creating a new animal(Cat) in array
        }
    }
    for (int i = 0; i < n; i++)
    {
        //std::cout << "Type: " << animals[i]->getType() << " -> ";
        
        animals[i]->makeSound();
        // std::cout << animals[i]->getBrain()->getIdeas(i) << std::endl; //getting ideas from array of animals
    }
    
    for (int i = 0; i < n; i++)
    {
        std::cout << BMAGENTA <<"Animal address: " << animals[i] << RESET << std::endl;
        //std::cout << animals[i]->getBrain() << std::endl;
        delete animals[i];
    }

    std::cout <<BWHITE << "-------------IDEAS---------------"<< RESET << std::endl;
    
    Cat caty;
    Dog doggy;
    Dog dogy2(doggy);

    std::cout << DR_MAGENTA << "caty:" << &caty << "\n" << caty.getBrain() << "\n" << RESET << DR_BLUE << "doggy:"<< &doggy << "\n" << doggy.getBrain() << "\n" << RESET << DR_GREEN << "dogy2:" << &dogy2 <<"\n" << dogy2.getBrain() << "\n" << RESET << "\n(should be all different...not shallow...not same brain)"<< RESET << std::endl;
    doggy.getBrain()->setIdeas("This is doggy idea", 0);
    caty.getBrain()->setIdeas("This is caty idea", 1);
    dogy2.getBrain()->setIdeas("This is doggy2 idea", 0);

    std::cout << BWHITE <<"dogy2 idea: (should be right): \n" << RESET << dogy2.getBrain()->getIdeas(0) << std::endl;

    std::cout << DR_WHITE <<"Cat idea:(should be none bcs of index set 0 for doggy) \n" << caty.getBrain()->getIdeas(0)<< RESET << std::endl;
    std::cout << BWHITE <<"Dog idea:(should be right) \n" << RESET << doggy.getBrain()->getIdeas(0)<<std::endl;
    std::cout << BWHITE <<"Cat idea:(should be right) \n" << RESET << caty.getBrain()->getIdeas(1) << std::endl;
    std::cout << DR_WHITE <<"Dog idea:(should be none bcs of index set 1 for caty) \n" << doggy.getBrain()->getIdeas(1)<< RESET << std::endl;

    //For next task check
    // Animal animal; 
    // std::cout << animal.getType() << std::endl;
    return 0;
}

