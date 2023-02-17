#include "Dummy.hpp"

Dummy::Dummy():ATarget("Target Practice Dumm"){}

Dummy::~Dummy(){}

ATarget *Dummy::clone() const
{
	return (new Dummy());
}