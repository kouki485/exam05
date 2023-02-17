#include "Fwoosh.hpp"

Fwoosh::Fwoosh():ASpell("FWoosh","fwooshed"){}

Fwoosh::~Fwoosh(){}

ASpell *Fwoosh::clone() const
{
	return (new Fwoosh());
}
