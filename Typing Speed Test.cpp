#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {


    string challenge;
    string input;
    time_t start, end;
    char choice;

    cout << "******** WELCOME TO THE TYPING SPEED CHALLENGE! ********\n";
    cout << "**** READY TO PLAY? (Y/N): ";
    cin >> choice;
    cin.ignore();

    while (choice == 'Y' || choice == 'y') {
        cout << "\nEnter the challenge line: ";
        getline(cin, challenge);

        cout << "\nType this line as fast as you can: " << challenge;
        cout << "\nReady? Press Enter to start...";
        cin.ignore();

        start = time(nullptr);
        getline(cin, input);
        end = time(nullptr);

        if (input == challenge)
            cout << "CORRECT! Time taken: " << end - start << " seconds.\n";
        else
            cout << "INCORRECT! Try again!\n";

        cout << "\nPlay again? (Y/N): ";
        cin >> choice;
        cin.ignore();
    }

        cout << "\n******** THANK YOU FOR PLAYING! ********\n";
        return 0;
    }