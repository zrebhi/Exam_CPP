#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void    SpellBook::learnSpell(ASpell *spell) {
    if (spell) {
        this->_spellBook[spell->getName()] = spell;
    }
}

void    SpellBook::forgetSpell(std::string const &spellName) {
    if (this->_spellBook.find(spellName) != this->_spellBook.end())
        this->_spellBook.erase(this->_spellBook.find(spellName));
}

ASpell  *SpellBook::createSpell(const std::string &spellName) {
    ASpell  *tmp = NULL;
    if (this->_spellBook.find(spellName) != this->_spellBook.end())
        tmp = this->_spellBook[spellName];
    return tmp;
}