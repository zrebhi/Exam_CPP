#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator {
private:
    std::map<std::string, ATarget *> _targetBook;
    TargetGenerator(const TargetGenerator &src);
    TargetGenerator &operator=(const TargetGenerator &rhs);

public:
    TargetGenerator();
    ~TargetGenerator();

    void    learnTargetType(ATarget *target);
    void    forgetTargetType(const std::string &targetType);
    ATarget *createTarget(const std::string &targetType);

};