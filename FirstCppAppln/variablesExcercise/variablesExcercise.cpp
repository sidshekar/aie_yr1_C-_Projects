
#include <iostream>

#include "Character.h"


int main()
{
    //std::cout << "This is the variables excercise cpp\n";

    int playerNumber1 = 1;
    int player1Health = 100;

    //Vector2 position = { 10.0f, 20.0f };

    Character player; // Creating an object of Player
    player.setNumber(1); // initialize number property of object player
    player.setHealth(100);// initialize health property of object player
    player.setPosition(10.0f, 20.0f);

    //std::cout << player.number << "," << player.health << std::endl;
    //std::cout << player.position.x << "," << player.position.y << std::endl;

    //player.printPropertyValues();



    Character player2(Vector2{30.0f, 89.0f},2,200);
    //player2.printPropertyValues();

    //std::cout << player2.number << "," << player2.health << std::endl;
    //std::cout << player2.position.x << "," << player2.position.y << std::endl;

    Character player3;
    player3.printPropertyValues();

    player3 = player2;

    player3.printPropertyValues();

    player3.setNumber(3);

    player3.printPropertyValues();

    //Player player2 = { {30.0f, 54.0f},  2, 100 }; // Create and Initalize object of Player

    //std::cout << player2.number << "," << player2.health << std::endl;
    //std::cout << player2.position.x << "," << player2.position.y << std::endl;

    int i;
    std::cin >> i;

    return 0;
}
