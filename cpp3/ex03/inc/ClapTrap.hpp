#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
 
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &copy);
        virtual ~ClapTrap();

        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void getStats(const char *color);
        
       int getHitPoints() const;
       int getEnergyPoints() const;
       int getAttackDamage() const;
    
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};

#endif

