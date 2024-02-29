#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
class game{
    private:
    int secretNumber = rand()%100+1;
    int guess;
    int attempts = 0;
    public:
    void display(){
        cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;
    }
    
    void logic(){
        do{ cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);
    }

};

int main() {
    srand(time(0));
    game obj;
    obj.display();
    obj.logic();

    return 0;
}