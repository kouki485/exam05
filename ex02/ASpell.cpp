#include "ASpell.hpp"

std::string ASpell::getName() const {return this->name;}

std::string ASpell::getEffects() const {return this->effects;}

ASpell::ASpell(std::string name,std::string effects):name(name),effects(effects){}

ASpell::~ASpell(){};


ASpell::ASpell(const ASpell &rhs){	*this = rhs;}

ASpell &ASpell::operator=(const ASpell &rhs)
{
	name = rhs.name;
	effects = rhs.effects;
	return *this;
}

void ASpell::launch(const ATarget & target) const
{
	target.getHitBySpell(*this);
}