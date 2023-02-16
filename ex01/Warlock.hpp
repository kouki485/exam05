//230

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock(Warlock const &src);
		Warlock &operator=(Warlock const &src);
		Warlock();
	public:
		const std::string &getName() const;
		const std::string &getTitle() const;
		void setTitle(const std::string title);
		Warlock(const std::string name,const std::string title);
		~Warlock();
		void introduce() const;
};

#endif