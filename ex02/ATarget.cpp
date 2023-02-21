#include "ATarget.hpp"

std::string ATarget::getType() const {return this->type;}

ATarget::ATarget(std::string type):type(type){}

ATarget::~ATarget(){};


ATarget::ATarget(const ATarget &rhs){	*this = rhs;}

ATarget &ATarget::operator=(const ATarget &rhs)
{
	type = rhs.type;
	return *this;
}

void ATarget::getHitBySpell(const ASpell &rhs) const
{
	std::cout << this->getType() << " has been " << rhs.getEffects() << "!" << std::endl;
}

