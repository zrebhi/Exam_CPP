#pragma once

#include "ASpell.hpp"
#include <map>
#include <iostream>

class SpellBook {
private:
    std::map<std::string, ASpell *> _spellBook;

public:
    SpellBook();
    ~SpellBook();

    void    learnSpell(ASpell *spell);
    void    forgetSpell(std::string const &spellName);
    ASpell  *createSpell(std::string const &spellName);
};