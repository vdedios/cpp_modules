#include "Enemy.hpp"

Enemy::Enemy(void): _type(""), _hp(0) {
}

Enemy::Enemy(std::string type, int hp): _type(type), _hp(hp) {
}

Enemy::Enemy(Enemy & enemy) {
    *this = enemy;
}

Enemy::~Enemy(void) {
}

std::string Enemy::getType(void) const {
    return this->_type;
}

int Enemy::gethp() const {
    return this->_hp;
}

void Enemy::takeDamage(int damage) {
    if (this->_hp <= 0 || damage < 0 ) {
        return ;
    }
    this->_hp = damage < this->_hp
        ? this->_hp - damage
        : 0;
}

Enemy & Enemy::operator=(Enemy & src) {
    this->_type = src._type;
    this->_hp = src._hp;
    return *this;
}
