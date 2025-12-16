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
        virtual void makeSound() const;
        virtual std::string getType() const;

       // virtual Brain* getBrain() const; //for setting ideas when creating a new animal in array
};

#endif
