#include <iostream>
#include <cstdlib>
#include <ctime>

void askForNumber(int* number);
void checkNumber(int number, int answer);

int main() {
    srand((int)time(0));
    int answer = rand() % 10;
    int number;
    
    while(number != answer)
    {
    askForNumber(&number);
    checkNumber(number, answer);
    }
    
}

void askForNumber(int* number) {
    std::cout << "Pick a number (0 to 9): " << std::endl;
    std::cin >> *number;
}

void checkNumber(int number, int answer) {
    if (number == answer)
    {
        std::cout << "Congrats! Your number: " << number << " Answer: " << answer << std::endl;
    }
    else if (number > answer)
    {
        std::cout << "Too high!" << std::endl;
    }
    else if (number < answer)
    {
        std::cout << "Too low!" << std::endl;
    }
    else
    {
        std::cout << "Wow..." << std::endl;
    }
    
}