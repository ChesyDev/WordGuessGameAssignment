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

string chooseWord()
{
    ifstream wordFile;
    return "";
}

string scrambleWord(string word)
{
    return "";
}

void guessWord(string answer)
{
    string guess;
    cout << "Type in your guess: ";
    getline(cin, guess);

    //Test commit
}

Player getPlayerSaved(string name)
{
    Player playerData;
    //If no save file then create a new file

    //If not found in save file
    playerData.name = move(name);
    playerData.totalCorrect = 0;
    playerData.totalGuess = 0;
    return playerData;
}

int main()
{
    string name;
    char ready;

    //Introduction to the game
    cout << "-------------------------------" << endl;
    cout << "         Word Scramble         " << endl;
    cout << "-------------------------------" << endl;
    cout << "Welcome to the word scramble game.\n" <<
        "You will have 3 attempts to guess the word.\n";

    //Input player data to retrieve saved file
    cout << "\nEnter your name: ";
    getline(cin, name);

    //Create new / Load existing player data
    Player currentPlayer;

    //Ask the player if he/she is ready
    cout << "Nice to meet you " << name << ", are you ready to begin? (Y/N): ";

    //Input validation loop
    do
    {
        cin >> ready; // Input ready status
        ready = static_cast<char>(toupper(ready)); // Keep ready status in uppercase

        switch(ready)
        {
        case 'Y': // Do nothing, skip to line 71 for the other functions. just to keep the code clean.
            cout << "\nPreparing word..." << endl;
            break;
        case 'N': // Exit the program if not ready
            cout << "\nPlayer not ready, exiting the game" << endl;
            return 0;
        default: // Input validation, try again.
            cout << "Invalid choice. Please enter again. (Y/N): ";
            break;
        }

    }while(ready != 'Y' && ready != 'N'); //Input validation loop

    string answer = chooseWord();
    string scrambled = scrambleWord(answer);
    string guess;
    int attempt = 3;
    bool correctGuess = false;

    while(attempt > 0 && !correctGuess)
    {
        cout << "Scrambled Word: " << scrambled << endl;
        cout << "(" << attempt  << " attempts left.)" << endl;
        cout << "Your guess: ";
        cin >> guess; //Prompt input guess
        currentPlayer.totalGuess++; // Add data into player save file
        attempt--;

        if(guess == scrambled) //Check if its the correct answer
            correctGuess = true;
    }

    if (correctGuess)
    {
        currentPlayer.totalCorrect++; // Add data into player save file
        cout << "Congratulations, you guessed it right!" << endl;
    } else
    {
        cout << "No more attempts! Do you want to play again?" << endl;
    }

    return 0;
}