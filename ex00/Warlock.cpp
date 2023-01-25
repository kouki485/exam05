#include "Warlock.hpp"

const std::string &Warlock::getName() const{return name;}

const std::string &Warlock::getTitle() const{return title;}

void Warlock::setTitle(const std::string title){this->title = title;}

Warlock::Warlock(const std::string name,const std::string title)
{
	this->name = name;
	setTitle(title);
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

Warlock::Warlock(Warlock const &src){*this = src;}

Warlock &Warlock::operator=(Warlock const &src)
{
	this->name = src.name;
	this->title = src.title;
	return *this;
}

Warlock::Warlock(){}
