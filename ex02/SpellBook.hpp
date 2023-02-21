#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
	private:
		SpellBook(SpellBook const &src);
		std::vector<ASpell *> spellbook;
		SpellBook &operator=(SpellBook const &src);
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *spell);
		void forgetSpell(const std::string &name);
		ASpell *createSpell(const std::string &name);
};

#endif