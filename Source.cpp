#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

int main() {
    srand(time(0));

    int secretNumber = rand() % 500 + 1;
    int guess, attempts = 0;
    std::chrono::time_point<std::chrono::system_clock> startTime, endTime;

    std::cout << "Welcome to the Guess the Number game!\n";
    std::cout << "Try to guess a number between 1 and 500.\n";
    std::cout << "Enter 0 at any time to quit the game.\n";

    startTime = std::chrono::system_clock::now();

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess == 0) {
            std::cout << "Game over. You quit the game.\n";
            break;
        }

        attempts++;

        if (guess < secretNumber) {
            std::cout << "The secret number is higher.\n";
        }
        else if (guess > secretNumber) {
            std::cout << "The secret number is lower.\n";
        }
        else {
            endTime = std::chrono::system_clock::now();
            std::chrono::duration<double> elapsedTime = endTime - startTime;
            std::cout << "Congratulations! You guessed the secret number " << secretNumber << "!\n";
            std::cout << "Attempts taken: " << attempts << "\n";
            std::cout << "Time taken: " << elapsedTime.count() << " seconds.\n";
            break;
        }
    }

    return 0;
}
