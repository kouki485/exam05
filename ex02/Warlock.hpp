//230

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock(Warlock const &src);
		Warlock &operator=(Warlock const &src);
		Warlock();
		std::vector<ASpell *> magic;
	public:
		const std::string &getName() const;
		const std::string &getTitle() const;
		void setTitle(const std::string title);
		Warlock(const std::string name,const std::string title);
		~Warlock();
		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string name);
		void launchSpell(std::string name,const ATarget &target);
};

#endif