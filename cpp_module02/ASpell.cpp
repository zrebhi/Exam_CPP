#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::~ASpell() {}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

std::string ASpell::getName() const {
    return this->_name;
}

std::string ASpell::getEffects() const {
    return this->_effects;
}

void	ASpell::launch(const ATarget &target) const {
    target.getHitBySpell(*this);
}