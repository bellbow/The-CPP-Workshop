// Activity 2: Number guessing game.
#include <iostream>
#include <string>

int main() {
    //Variables
    std::string input = "";
    bool bIsRunning = true;
    int guessNum = 0;
    int maxNum = 0;
    int minNum = 0;
    int randomNumber = 0;

    //Running Loop
    while (bIsRunning) {
        //Get user input
        std::cout << "****Let's Play A Number Guessing Game****\n";
        std::cout << "Enter a number of guesses: ";
        getline(std::cin, input);
        guessNum = std::stoi(input);

        std::cout << "Enter a maximum number: ";
        getline(std::cin, input);
        maxNum = std::stoi(input);

        std::cout << "Enter a minimum number: ";
        getline(std::cin, input);
        minNum = std::stoi(input);

        //Generate random number
        srand((unsigned)time(0));
        randomNumber = rand() % (maxNum - minNum + 1);
        
        //Guessing loop
        for  (int i = 0; i < guessNum; ++i) {
            int guess = 0;
            
            std::cout << "\nGuess the number: ";
            getline(std::cin, input);
            guess = std::stoi(input);

            //End if correct
            if (guess == randomNumber) {
                std::cout << "You got it! Good job!\n";
                break;
            }

            //Reduce guesses and give hint
            int guessesRemaining = guessNum - (i + 1);
            std::cout << "Try " << (guess > randomNumber ? "lower" : "higher") << ".\n"; 
            std::cout << "You have " << guessesRemaining << " guesses left. \n";  
        }

        std::cout << "Enter 0 to exit, any number to continue: ";
        getline(std::cin,input);

        if (std::stoi(input)==0) {
            bIsRunning = false;
        }
    }
}
