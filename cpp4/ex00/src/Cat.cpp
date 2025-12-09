#include "Cat.hpp"
#include "Colors.hpp"


Cat::Cat() : Animal::Animal("Cat") {
   // std::cout<<RED << "Cat constructor"<< RESET << std::endl;
}
Cat::Cat(const Cat& copy) : Animal(copy) {
    //std::cout<<RED << "Cat copy constructor"<< RESET << std::endl;
}

Cat& Cat::operator=(const Cat& copy) {
    //std::cout<<RED << "Cat copy assignment operator"<< RESET << std::endl;
    if (this != &copy)
    {
        Animal::operator=(copy); //this->_type = copy._type;
    }
    return *this;
}

Cat::~Cat() {
    //std::cout<<RED << "Cat destructor"<< RESET << std::endl;
}

void Cat::makeSound() const {
    std::cout<<RED << "Meow Meow Ave Satan"<< RESET << std::endl;
}
