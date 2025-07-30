#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string playerName;
    int playerChoice, computerChoice;
    char playAgain;

    srand(time(0));

    cout << "Welcome to Snake Water Gun Game!\nEnter your name: ";
    getline(cin, playerName);

    do {
        cout << "\n1. Snake\n2. Water\n3. Gun\n" << playerName << ", enter your choice (1-3): ";
        cin >> playerChoice;

        while(playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice! Enter 1, 2, or 3: ";
            cin >> playerChoice;
        }

        computerChoice = rand() % 3 + 1;

        cout << "\n" << playerName << " chose: ";
        switch(playerChoice) {
            case 1: cout << "Snake"; break;
            case 2: cout << "Water"; break;
            case 3: cout << "Gun"; break;
        }

        cout << "\nComputer chose: ";
        switch(computerChoice) {
            case 1: cout << "Snake"; break;
            case 2: cout << "Water"; break;
            case 3: cout << "Gun"; break;
        }

        if(playerChoice == computerChoice) {
            cout << "\nIt's a tie!\n";
        } else if((playerChoice == 1 && computerChoice == 2) ||
                  (playerChoice == 2 && computerChoice == 3) ||
                  (playerChoice == 3 && computerChoice == 1)) {
            cout << "\n" << playerName << " wins!\n";
        } else {
            cout << "\nComputer wins!\n";
        }

        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;

    } while(tolower(playAgain) == 'y');

    cout << "\nThanks for playing!\n";
    return 0;
}
