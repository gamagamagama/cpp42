#include "Brain.hpp"
#include "Colors.hpp"

Brain::Brain() {
    std::cout<<DR_GREEN << "Brain constructor called"<<RESET << std::endl;
}

Brain::~Brain() {
    std::cout<<DR_GREEN << "Brain destructor called" <<RESET<< std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout<<DR_GREEN << "Brain copy constructor called"<<RESET << std::endl;
    for(int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << DR_GREEN<< "Brain copy assignment operator called"<<RESET << std::endl;
    for(int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
    return *this;
}

std::string Brain::getIdeas(int index) const {
    std::cout<<DR_GREEN << "Brain getIdeas called"<<RESET << std::endl;
    return std::string(BBLUE) + _ideas[index] + RESET;
}

void Brain::setIdeas(std::string idea, int index) {
    std::cout<<DR_GREEN << "Brain setIdeas called"<<RESET << std::endl;
    _ideas[index] = idea;
}
