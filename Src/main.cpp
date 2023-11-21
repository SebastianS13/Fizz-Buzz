#include "FizzBuzz.hpp"
#include <iostream>

int main(int, char**){
    int MaxNumber = 0;

    std::cout << "Welcome to FizzBuzz by sebastian! \nHow many numbers to go up to: ";
    std::cin >> MaxNumber;

    FizzBuzz FizzBuzzObject;
    FizzBuzzObject.LoopCheck(1, MaxNumber);

    system("Pause");
}
