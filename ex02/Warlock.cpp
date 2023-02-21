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
	std::vector<ASpell *>::iterator itS = magic.begin();
	std::vector<ASpell *>::iterator itE = magic.end();

	while (itS != itE)
	{
		delete *itS;
		itS++;
	}
	this->magic.clear();
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

void Warlock::learnSpell(ASpell *spell)
{
	std::vector<ASpell *>::iterator its = magic.begin();
	std::vector<ASpell *>::iterator ite = magic.end();

	if(spell)
	{
		while(its != ite)
		{
			if((*its)->getName() == spell->getName())
				return;
			its++;
		}
		this->magic.push_back(spell->clone());
	}
}

void Warlock::forgetSpell(std::string name)
{
	std::vector<ASpell *>::iterator its = magic.begin();
	std::vector<ASpell *>::iterator ite = magic.end();


	while(its != ite)
	{
		if((*its)->getName() == name)
		{
			delete *its;
			this->magic.erase(its);
			return ;
		}
		its++;
	}
}

void Warlock::launchSpell(std::string name,const ATarget &target)
{
	std::vector<ASpell *>::iterator its = magic.begin();
	std::vector<ASpell *>::iterator ite = magic.end();

	while(its != ite)
	{
		if((*its)->getName() == name)
		{
			(*its)->launch(target);
			return ;
		}
		its++;
	}
}