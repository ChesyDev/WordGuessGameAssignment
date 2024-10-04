#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

struct Player
{
    string name;
    int totalGuess; //Total Guesses
    int totalCorrect; //Total Correct Guess
};

string scrambleWord()
{
    ifstream wordFile;
    return "";
}

void guessWord(string answer)
{
    string guess;
    cout << "Type in your guess: ";
    getline(cin, guess);


}

int main()
{
    cout << ""; //Introduction to the game
    cout << ""; //Enter player data

    //Prompt a game first, then ask if to try again or no. If yes loop, no = exit
    return 0;
}
