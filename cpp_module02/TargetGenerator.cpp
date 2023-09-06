#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget *target) {
	if (target)
		this->_targetBook[target->getType()] = target;
}


void	TargetGenerator::forgetTargetType(const std::string &targetType) {
	if (this->_targetBook.find(targetType) != this->_targetBook.end())
		this->_targetBook.erase(this->_targetBook.find(targetType));
}

ATarget	*TargetGenerator::createTarget(const std::string &targetType) {
	ATarget	*tmp = NULL;
	if (this->_targetBook.find(targetType) != this->_targetBook.end())
		tmp = this->_targetBook[targetType];
	return tmp;
}