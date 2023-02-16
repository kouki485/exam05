#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ATarget
{
	private:
		std::string type;
		ATarget();
	public:
		ATarget(std::string type);
		std::string getType() const;
		ATarget &operator=(const ATarget &rhs);
		ATarget(const ATarget &rhs);
		virtual ~ATarget();
		virtual ATarget *clone() const = 0;
		void getHitBySpell(const ASpell &rhs) const;
};

#endif