#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook()
{
	std::vector<ASpell *>::iterator its = spellbook.begin();
	std::vector<ASpell *>::iterator ite = spellbook.end();

	while(its != ite)
	{
		delete *its;
		its++;
	}
	this->spellbook.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	std::vector<ASpell *>::iterator its = spellbook.begin();
	std::vector<ASpell *>::iterator ite = spellbook.end();

	if(spell)
	{
		while(its != ite)
		{
			if((*its)->getName() == spell->getName())
				return ;
			its++;
		}
		this->spellbook.push_back(spell->clone());
	}
}

void SpellBook::forgetSpell(const std::string &name)
{
	std::vector<ASpell *>::iterator its = spellbook.begin();
	std::vector<ASpell *>::iterator ite = spellbook.end();

	while(its != ite)
	{
		if((*its)->getName() == name)
		{
			delete *its;
			this->spellbook.erase(its);
			return ;
		}
		its++;
	}
}

ASpell *SpellBook::createSpell(const std::string &name)
{
	std::vector<ASpell *>::iterator its = spellbook.begin();
	std::vector<ASpell *>::iterator ite = spellbook.end();

	while(its != ite)
	{
		if((*its)->getName() == name)
			return (*its);
		its++;
	}
	return (NULL);
}






