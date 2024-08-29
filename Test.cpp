#include <iostream>

int main()
{
    std::cout << "I have a number between 1 and 1000.\n";
    std::cout << "Can you guess my number?\n";
    std::cout << "Please type your first guess.\n";
    std::cout << "?";

    for (int i = 1; i < 1000; i++){

        int x;
        std::cin >> x;

        if (x == 23) {
            std::cout << "Excellent! You guessed the number!\n";
            break;
        } else if (x < 23) {
            std::cout << "Too low. Try again.\n";
            std::cout << "?";
        } else if (x > 23) {
            std::cout << "Too high. Try again.\n";
            std::cout << "?";
        } 

    }
    
    return 0;

}
