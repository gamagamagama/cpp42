#include "Brain.hpp"
#include "Colors.hpp"

Brain::Brain() {
    std::cout<<GREEN << "Brain constructor called"<<RESET << std::endl;
}

Brain::~Brain() {
    std::cout<<GREEN << "Brain destructor called" <<RESET<< std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout<<BGREEN << "Brain copy constructor called"<<RESET << std::endl;
    for(int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << BGREEN<< "Brain copy assignment operator called"<<RESET << std::endl;
    for(int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
    return *this;
}

std::string Brain::getIdeas(int index) const {
    std::cout<<BGREEN << "Brain getIdeas called"<<RESET << std::endl;
    return _ideas[index];
}

void Brain::setIdeas(std::string idea, int index) {
    std::cout<<BGREEN << "Brain setIdeas called"<<RESET << std::endl;
    _ideas[index] = idea;
}
