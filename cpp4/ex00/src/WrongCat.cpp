#include "WrongCat.hpp"
#include "Colors.hpp"


WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor called\n";
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& origin) : WrongAnimal(origin)
{
    std::cout << "WrongCat copy constructor called." << std::endl;
};

WrongCat& WrongCat::operator =(const WrongCat& origin)
{
    std::cout << "WrongCat copy assignment operator called." << std::endl;
    if (this != &origin)
        WrongAnimal::operator =(origin);
    return *this;
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}


void WrongCat::makeSound() const
{
    std::cout << BGRAY <<"WrongCat meow"<< RESET << std::endl;
}
