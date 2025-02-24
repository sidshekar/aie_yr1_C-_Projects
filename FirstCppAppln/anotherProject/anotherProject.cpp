// anotherProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//
//    int my_number = 20;
//    //&my_number;
//    
//    std::cout << &my_number << std::endl;
//    std::cout << my_number << std::endl;
//
//
//    int* my_pointer; // ONLY store addresses of data type integer
//
//    my_pointer = &my_number; 
//
//    std::cout << my_pointer << std::endl;
//
//    std::cout << *my_pointer << std::endl;
//
//
//
//    my_number = 45;
//
//    std::cout << *my_pointer << std::endl;
//
//
//
//    struct Point { float x, y; };
//
//    Point point = { 5, 3 };
//    Point* point_pointer = &point;
//
//    //dereference, and then access the variable
//    (*point_pointer).x = 5;
//
//
//    //dereference, and then access the variable
//    point_pointer->x = 5; // shorthand
//
//    int i;
//    std::cin >> i;
//
//    return 0;
//}
//


void PassByValue(int);
void PassByReference(int&);


class Position2D {
public:
	float x, y;
};

class Enemy {
public:

	Enemy() {
		std::cout << "Enemy: Default Constructor" << std::endl;
	}


	Enemy(Position2D& pos) {
		position = pos;

		std::cout << "Enemy: Explicit Constructor" << std::endl;
	}
	

	void Update() {
	
		std::cout << "Enemy: Update" << std::endl;

	}
protected:
	Position2D position;
};

//Grunt can access Enemy::position as it now
//derives from grunt
class Grunt : public Enemy {
public:

	Grunt() {
		
		id = 0;

		std::cout << "Grunt: default Constructor" << std::endl;

	}
	//Explicity calls enemy constructor
	Grunt(Position2D position, int id) : Enemy(position) {
		this->id = id;

		std::cout << "Grunt: Explicit Constructor" << std::endl;
	}


	void DoGruntStuff() {
	
		std::cout << "Grunt: Do Grunt stuff" << std::endl;
	}

	void printPosition() {
	
		std::cout << position.x << ", " << position.y << std::endl;

	}

private:
	int id;
};


// Main function
void main() {
	//int myValue = 10;
	//
	////PassByValue(myValue);
	////std::cout << myValue << std::endl;

	//PassByReference(myValue);
	//std::cout << myValue << std::endl;


	//Position2D pos = { 25.8, 32.3 };

	//Grunt g1(pos, 1);

	//g1.DoGruntStuff();

	//g1.Update();

	//g1.printPosition();



	int* iPtr = new int(121); //The ascii code for 'y' is 121
	char* charPtr = reinterpret_cast<char*>(iPtr);
	std::cout << "The value of charPtr is: " << charPtr << std::endl;

	
	system("pause");
}



void PassByValue(int valueToModify) {

	valueToModify *= 2; // Does not modify the variable passed in!

	std::cout << valueToModify << std::endl;
}

void PassByReference(int& valueToModify) {

	valueToModify *= 2; // Modifies the value being passed in

}