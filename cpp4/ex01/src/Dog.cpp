#include "Dog.hpp"

Dog::Dog(): Animal::Animal(), _brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(const Dog& other): Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        delete _brain;
        this->_brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Hav Hav God Power" << std::endl;
}

Brain* Dog::getBrain() const {
    return _brain;
}
