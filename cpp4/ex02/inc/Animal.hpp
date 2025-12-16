#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);

        virtual ~Animal();
        virtual void makeSound() const = 0;
        virtual std::string getType() const;

        //virtual Brain* getBrain() const;
};

#endif
