#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        virtual ~Dog();
        void makeSound() const;
        virtual Brain* getBrain() const;

    private:
        Brain* _brain;
};

#endif
