#include <iostream>

int sum(int x, int y); // prototype of sum function
int mul(int x, int y); // prototype of sum function

float sum(float x, float y);

void printSubtract(int x, int y) {

    int z = x - y;

    std::cout << z << std::endl;

    // no retutn required !!!
}


//int main() { // 
//    
//    for (int i = 0; i > 0; i++) {
//
//        std::cout << i << std::endl;
//   
//    }
//
//    int o = sum(8, 10);
//    std::cout << o << std::endl;
//
//    int p = sum(18, 22);
//    std::cout << p << std::endl;
//
//    int q = mul(223, 82);
//    std::cout << q << std::endl;
//    
//    float r = sum(18.0f, 392.5f);
//    std::cout << r << std::endl;
//
//    int g = sum(18.0f, 392.5f); // be careful when calling overloaded functions !!
//    std::cout << g << std::endl;
//
//   printSubtract(345,54);
//
//    int i = 0;
//    std::cin >> i;
//    
//
//
//    return 0;
//}

int divide(int x, int y) {

    int z = x / y;

    return z;
}


int mul(int x, int y) {

    int z = x * y;

    return z;
}

int sum(int x, int y) {

    int z = x + y;

    return z;
}

float sum(float x, float y) {

    float z = x + y;

    return z;
}