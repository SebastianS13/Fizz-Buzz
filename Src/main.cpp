#include <iostream>
#include <string>

int main(int, char**){
    int MaxNumber = 0;
    int StartNumber = 1;

    std::cout << "Welcome to FizzBuzz by sebastian! \nHow many numbers to go up to: ";
    std::cin >> MaxNumber;

    for (int CurrentNumber = StartNumber; CurrentNumber <= MaxNumber; CurrentNumber++)
    {
        std::string Output = "";
    
        if(CurrentNumber % 3 == 0 && CurrentNumber % 5 == 0) { Output = "FizzBuzz"; }
        else if(CurrentNumber % 3 == 0) { Output = "Fizz"; }
        else if(CurrentNumber % 5 == 0) { Output = "Buzz"; }
        else { Output = std::to_string(CurrentNumber); }

        std::cout << Output << "\n";
    }

    system("Pause");
}
