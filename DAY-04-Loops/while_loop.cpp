#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function

using namespace std;

int main()
{
  // Guessing game using a while loop

  srand(time(0));
  int secretNumber = rand() % 100 + 1;
  int guess;
  int attempts = 0;

  cout << "Welcome to the Guessing Game!\n";
  cout << "Try to guess the secret number between 1 and 100.\n\n";

  while (true)
  {
    cout << "Enter your guess: ";
    cin >> guess;

    attempts++;

    if (guess == secretNumber)
    {
      cout << "\nCongratulations! You guessed the correct number in " << attempts << " attempts.\n";
      break;
    }
    else if (guess < secretNumber)
    {
      cout << "Too low. Try again.\n";
    }
    else
    {
      cout << "Too high. Try again.\n";
    }
  }

  return 0;
}
