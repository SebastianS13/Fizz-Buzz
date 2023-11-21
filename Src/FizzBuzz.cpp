#include "FizzBuzz.hpp"

#include <string>
#include <iostream>

bool FizzBuzz::IsFizz(int Number)
{
	if(Number % 3 == 0) {return true;}
	return false;
}
	
bool FizzBuzz::IsBuzz(int Number)
{
	if(Number % 5 == 0) {return true;}
	return false;
}

void FizzBuzz::LoopCheck(int StartNumber, int EndNumber)
{
	for (int CurrentNumber = StartNumber; CurrentNumber <= EndNumber; CurrentNumber++)
    {
        std::string Output = "";
    
        if(FizzBuzz::IsFizz(CurrentNumber) && FizzBuzz::IsBuzz(CurrentNumber)) { Output = "FizzBuzz"; }
        else if(FizzBuzz::IsFizz(CurrentNumber)) { Output = "Fizz"; }
        else if(FizzBuzz::IsBuzz(CurrentNumber)) { Output = "Buzz"; }
        else { Output = std::to_string(CurrentNumber); }

        std::cout << Output << "\n";
    }
}