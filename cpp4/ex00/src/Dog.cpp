#include "Dog.hpp"
#include "Colors.hpp"

Dog::Dog(): Animal::Animal("Dog")
{
    //std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(const Dog& copy) : Animal(copy)
{
    //std::cout << "Dog copy constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& copy) 
{
    //std::cout << "Dog copy assignment operator" << std::endl;
    if (this != &copy)
    {
        Animal::operator=(copy); //this->_type = copy._type;
    }
    return *this;
}

Dog::~Dog()
{
    //std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout<< GREEN << "Woof Woof God Power"<< RESET << std::endl;
}
