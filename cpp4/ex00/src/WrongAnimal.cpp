#include "WrongAnimal.hpp"
#include "Colors.hpp"

WrongAnimal::WrongAnimal() : _type("Animal")
{
   // std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
   // std::cout << "WrongAnimal copy assignment operator" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
   // std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    std::cout<<BGRAY << "WrongAnimal getType: "<<_type<<" called"<< RESET << std::endl;
    return _type;
}

void WrongAnimal::makeSound() const
{
    std::cout<<BGRAY << "WrongAnimal generic sound"<< RESET << std::endl;
}
