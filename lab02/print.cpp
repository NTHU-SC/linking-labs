#include <iostream> // std::cout, std::endl

//extern "C"{ 

void printSumInt(int a, int b) {
    std::cout << a << " + " << b << " = " << a + b << std::endl;
}

void printSumFloat(float a, float b) {
    std::cout << a << " + " << b << " = " << a + b << std::endl;
}
//}
