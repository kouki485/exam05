#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		TargetGenerator(TargetGenerator const &src);
		std::vector<ATarget *> ptarget;
		TargetGenerator &operator=(TargetGenerator const &src);
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget *target);
		void forgetTargetType(const std::string &name);
		ATarget *createTarget(const std::string &name);
};

#endif