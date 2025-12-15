#include "Dog.hpp"
#include "Colors.hpp"

Dog::Dog(): Animal::Animal(), _brain(new Brain())
{
    std::cout <<YELLOW <<"Dog constructor called"<<RESET << std::endl;
}
Dog::Dog(const Dog& other): Animal(other), _brain(new Brain(*other._brain))
{
    std::cout<<YELLOW << "Dog copy constructor called"<<RESET << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout<<YELLOW << "Dog copy assignment operator called"<<RESET << std::endl;
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
    std::cout<<YELLOW << "Dog destructor called"<<RESET << std::endl;
}

void Dog::makeSound() const {
    std::cout<<YELLOW << "Hav Hav God Power"<<RESET << std::endl;
}

Brain* Dog::getBrain() const {
    std::cout << BYELLOW <<"Dog getBrain called"<<RESET << std::endl;
    return _brain;
}
