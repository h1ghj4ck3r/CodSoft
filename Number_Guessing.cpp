#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int randomNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Low! Try again." << endl;
        } else if (guess > randomNumber) {
            cout << "High! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
            cout << "It took you " << attempts << " attempts." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
