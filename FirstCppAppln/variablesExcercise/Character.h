#pragma once

#include <iostream>
#include "DataTypes.h"


class Character{

    Vector2 position;
    int number;
    int health;

public:

    // 1. Dont take return data type
    // 2. Same name as the class
    // 3. Initialize member variables
    Character(); // Default Constructor
    Character(Vector2 _pos, int _number, int _health);// Overloaded constructor

    Character(Character& character);


    ~Character();


    void move(Vector2 direction, float speed);
    void takeDamage(int dmg);
    void setHealth(int health);
    void setNumber(int _number);
    void setPosition(float x, float y);

    void printPropertyValues();

};

