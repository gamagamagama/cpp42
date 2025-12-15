#include "Cat.hpp"

Cat::Cat() : Animal::Animal(), _brain(new Brain()) {
    std::cout << "Cat default constructor" << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain)) {
    
    std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment operator" << std::endl;
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
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow Ave Satan" << std::endl;
}

Brain* Cat::getBrain() const {
    return _brain;
}
