#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <ctime>
#include <cstdlib>

using namespace std;

const int NUM_WORDS = 10;
const int MAX_GUESSES = 5;

vector<string> words = {
  "apple",
  "banana",
  "cherry",
  "date",
  "elderberry",
  "fig",
  "grape",
  "honeydew",
  "ice cream",
  "jackfruit"
};

int main() {
  srand(time(0)); // seed random number generator
  int randomIndex = rand() % words.size();
  string secretWord = words[randomIndex];

  int numGuesses = 0;
  string guess;

  cout << "Welcome to the word guessing game!" << endl;
  cout << "I'm thinking of a word that has " << secretWord.length() << " letters." << endl;

  while (numGuesses < MAX_GUESSES) {
    cout << "Enter your guess: ";
    cin >> guess;

    if (secretWord.compare(guess) == 0) {
      cout << " Congratulations! You guessed the word!" << endl;
      return 0;
    } else {
      cout << "Sorry, that's not correct. Try again!" << endl;
      numGuesses++;
    }
  }

  cout << "You didn't guess the word. The correct answer was " << secretWord << "." << endl;
  return 0;
}
