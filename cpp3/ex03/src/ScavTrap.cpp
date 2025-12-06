
#include "ScavTrap.hpp"
#include "Colors.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "Default (ScavTrap) constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    //HERE
    std::cout<<YELLOW << "(constructor) ScavTrap " << this->_name << " has been created"<< RESET << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 100;
    std::cout << std::endl;}
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << YELLOW << "(destructor) ScavTrap " << this->_name << " has been destroyed"<< RESET << std::endl;
    std::cout << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hitPoints <= 0 || this->_energyPoints <= 0) {
        ClapTrap::attack(target);
        return;
    }
    std::cout << RED << "ScavTrap " << this->_name << " hardly attacks " << target << ", dealing " << this->_attackDamage << " points of damage!"<< RESET << std::endl;
    this->_energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}