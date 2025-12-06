#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap &operator=(const DiamondTrap &other);
        ~DiamondTrap();
        void whoAmI(void);
    
    private:
        std::string _name;
};

#endif
