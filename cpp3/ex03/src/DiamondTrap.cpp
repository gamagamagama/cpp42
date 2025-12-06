#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->_name = "Default";
    std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
    std::cout << "(constructor) DiamondTrap constructor called" << std::endl;
    this->_name = name;

    FragTrap tmpFrag(name);
    ScavTrap tmpScav(name);

    this->_hitPoints    = tmpFrag.getHitPoints();
    this->_energyPoints = tmpScav.getEnergyPoints();
    this->_attackDamage = tmpFrag.getAttackDamage();

}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    this->_name = copy._name;
    std::cout << "(copy constructor) DiamondTrap constructor called" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy) {
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "(destructor) DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap name: " << this->_name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
