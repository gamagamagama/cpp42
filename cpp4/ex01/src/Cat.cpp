#include "Cat.hpp"
#include "Colors.hpp"

Cat::Cat() : Animal::Animal(), _brain(new Brain()) {
    std::cout << RED <<"Cat default constructor"<< RESET << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain)) {
    
    std::cout<<RED << "Cat copy constructor"<< RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout<<RED << "Cat copy assignment operator"<< RESET << std::endl;
    if (this != &other)
    {
        delete _brain;
        this->_brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    return *this;
}

Cat::~Cat() {
    delete _brain;
    std::cout <<RED <<"Cat destructor"<< RESET << std::endl;
}

void Cat::makeSound() const {
    std::cout<<RED << "Meow Meow Ave Satan"<< RESET << std::endl;
}

Brain* Cat::getBrain() const {
    std::cout<<BRED << "Cat getBrain called"<< RESET << std::endl;
    return _brain;
}
