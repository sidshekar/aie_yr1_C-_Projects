#include "Character.h"

Character::Character() {

     position = Vector2{};
     number = 1;
     health = 100;

     std::cout << number << "," << health << std::endl;
     std::cout << position.x << "," << position.y << std::endl;
}

Character::Character(Vector2 _pos, int _number, int _health) {

    position = _pos;
    number = _number;
    health = _health;
}

Character::Character(Character& character) {

}

Character::~Character() {
    // Destroy/ Release memory
}

void Character::move(Vector2 direction, float speed) {

	position.x = direction.x * speed;
	position.y = direction.y * speed;
}

void Character::takeDamage(int dmg) {
	
	health -= dmg;
}


void Character::setHealth(int health) {

    this->health = health;
}


void Character::setNumber(int _number) {

    number = _number;
}


void Character::setPosition(float x, float y) {

    position.x = x;
    position.y = y;
}

void Character::printPropertyValues() {

    std::cout << number << "," << health << std::endl;
    std::cout << position.x << "," << position.y << std::endl;
}
