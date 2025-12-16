#include "Animal.hpp"
#include "Colors.hpp"

Animal::Animal() : _type("Animal")
{
    //std::cout <<DR_BLUE << "Animal default constructor called"<< RESET << std::endl;
}
Animal::Animal(const Animal &copy) : _type(copy._type)
{
    //std::cout <<DR_BLUE << "Animal copy constructor called"<< RESET << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &other)
{
    //std::cout<<DR_BLUE << "Animal copy assignment operator called"<< RESET << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

Animal::~Animal()
{
    //std::cout<<DR_BLUE << "Animal destructor called"<< RESET << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
    //std::cout<<DR_BLUE << "Animal type constructor called"<< RESET << std::endl;
    this->_type = type;
}

std::string Animal::getType() const
{
    std::string color = WHITE;
    (this->_type == "Dog") ? color = GREEN :"";
    (this->_type == "Cat") ? color = RED :"";
    (this->_type == "WrongCat") ? color = BGRAY : "";
    std::cout<<BBLUE << "Animal getType: "<<color<<this->_type<<" called"<< RESET << std::endl;
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout<<BLUE << "welcome to the jungle"<< RESET << std::endl;
}

// Brain* Animal::getBrain() const {

//     return NULL; //default brain call for animal in array
// };
