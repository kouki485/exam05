#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;
		ASpell();
	public:
		ASpell(std::string name,std::string effects);
		std::string getName() const;
		std::string getEffects() const;
		ASpell &operator=(const ASpell &rhs);
		ASpell(const ASpell &rhs);
		virtual ~ASpell();
		virtual ASpell *clone() const = 0;
		void launch(const ATarget & target) const;
};

#endif