#include "BrickWall.hpp"

BrickWall::BrickWall() {
    this->_type = "Inconspicuous Red-brick Wall";
}

BrickWall::~BrickWall() {} 

BrickWall  *BrickWall::clone() const {
    return new BrickWall();
}