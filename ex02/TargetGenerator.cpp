#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator()
{
	std::vector<ATarget *>::iterator its = ptarget.begin();
	std::vector<ATarget *>::iterator ite = ptarget.end();

	while(its != ite)
	{
		delete *its;
		its++;
	}
	this->ptarget.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	std::vector<ATarget *>::iterator its = ptarget.begin();
	std::vector<ATarget *>::iterator ite = ptarget.end();

	if(target)
	{
		while(its != ite)
		{
			if((*its)->getType() == target->getType())
				return ;
			its++;
		}
		this->ptarget.push_back(target->clone());
	}
}

void TargetGenerator::forgetTargetType(const std::string &name)
{
	std::vector<ATarget *>::iterator its = ptarget.begin();
	std::vector<ATarget *>::iterator ite = ptarget.end();

	while(its != ite)
	{
		if((*its)->getType() == name)
		{
			delete *its;
			this->ptarget.erase(its);
			return ;
		}
		its++;
	}
}

ATarget *TargetGenerator::createTarget(const std::string &name)
{
	std::vector<ATarget *>::iterator its = ptarget.begin();
	std::vector<ATarget *>::iterator ite = ptarget.end();

	while(its != ite)
	{
		if((*its)->getType() == name)
			return (*its);
		its++;
	}
	return (NULL);
}