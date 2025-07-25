#include <iostream>
#include <string>
using namespace std;

int x = 1;
int bal = 0;

void balance(int a = 1) {
    if (a == 1) {
        bal += 10000; 
    }
    cout << "\nTotal Amount You Won Is " << bal << endl;
}


void exit_game() {
    balance(2);
    exit(0);
}


void question() {
    string ans;
    
    if (x == 1) {
        cout << "\nWhat is the capital of France?" << endl;
        cout << "A). Marseille" << endl;
        cout << "B). Lyon" << endl;
        cout << "C). Paris" << endl;
        cout << "D). Perpignan" << endl;
        cout << "Enter Your Option (A/B/C/D):: ";
        cin >> ans;
        if (ans == "C" || ans == "c") {
            cout << "\nYour Answer Was Correct! You Won 10,000/-" << endl;
            balance();
            x = 2;
        } else {
            cout << "\nWrong Answer. Here Is Your Path End Now" << endl;
            exit_game();
        }

    } else if (x == 2) {
        cout << "\nWhich is the largest ocean on Earth?" << endl;
        cout << "A). Atlantic Ocean" << endl;
        cout << "B). Indian Ocean" << endl;
        cout << "C). Pacific Ocean" << endl;
        cout << "D). Arctic Ocean" << endl;
        cout << "Enter Your Option (A/B/C/D):: ";
        cin >> ans;
        if (ans == "C" || ans == "c") {
            cout << "\nYour Answer Was Correct! You Won 10,000/-" << endl;
            balance();
            x = 3;
        } else {
            cout << "\nWrong Answer. Here Is Your Path End Now" << endl;
            exit_game();
        }

    } else if (x == 3) {
        cout << "\nWhat planet is known as the 'Red Planet'?" << endl;
        cout << "A). Jupiter" << endl;
        cout << "B). Mars" << endl;
        cout << "C). Mercury" << endl;
        cout << "D). Venus" << endl;
        cout << "Enter Your Option (A/B/C/D):: ";
        cin >> ans;
        if (ans == "B" || ans == "b") {
            cout << "\nYour Answer Was Correct! You Won 10,000/-" << endl;
            balance();
            x = 4;
        } else {
            cout << "\nWrong Answer. Here Is Your Path End Now" << endl;
            exit_game();
        }

    } else if (x == 4) {
        cout << "\nWhat is the name of the fictional wizarding school in the Harry Potter series?" << endl;
        cout << "A). Hogwarts School of Witchcraft and Wizardry" << endl;
        cout << "B). Dumbledore school" << endl;
        cout << "C). Hogwarts" << endl;
        cout << "D). School Of Magic" << endl;
        cout << "Enter Your Option (A/B/C/D):: ";
        cin >> ans;
        if (ans == "A" || ans == "a") {
            cout << "\nYour Answer Was Correct! You Won 10,000/-" << endl;
            balance();
            x = 5;
        } else {
            cout << "\nWrong Answer. Here Is Your Path End Now" << endl;
            exit_game();
        }

    } else if (x == 5) {
        cout << "\nHow many players are there on a standard soccer team?" << endl;
        cout << "A). 8" << endl;
        cout << "B). 9" << endl;
        cout << "C). 11" << endl;
        cout << "D). 7" << endl;
        cout << "Enter Your Option (A/B/C/D):: ";
        cin >> ans;
        if (ans == "C" || ans == "c") {
            cout << "\nYour Answer Was Correct! You Won 10,000/-" << endl;
            balance();
            x = 6;
        } else {
            cout << "\nWrong Answer. Here Is Your Path End Now" << endl;
            exit_game();
        }

    } else if (x == 6) {
        cout << "\nWhat is the currency used in the United Kingdom?" << endl;
        cout << "A). Dollar" << endl;
        cout << "B). Pound" << endl;
        cout << "C). Euro" << endl;
        cout << "D). Dhenar" << endl;
        cout << "Enter Your Option (A/B/C/D):: ";
        cin >> ans;
        if (ans == "B" || ans == "b") {
            cout << "\nYour Answer Was Correct! You Won 10,000/-" << endl;
            balance();
            x = 7;
        } else {
            cout << "\nWrong Answer. Here Is Your Path End Now" << endl;
            exit_game();
        }

    } else if (x == 7) {
        cout << "\nWhat is the most abundant gas in Earth's atmosphere?" << endl;
        cout << "A). Carbon Dioxide" << endl;
        cout << "B). Methane" << endl;
        cout << "C). Krypton" << endl;
        cout << "D). Nitrogen" << endl;
        cout << "Enter Your Option (A/B/C/D):: ";
        cin >> ans;
        if (ans == "D" || ans == "d") {
            cout << "\nYour Answer Was Correct! You Won 10,000/-" << endl;
            balance();
            x = 8;
        } else {
            cout << "\nWrong Answer. Here Is Your Path End Now" << endl;
            exit_game();
        }

    } else if (x == 8) {
        cout << "\nWhich country is known as the Land of the Rising Sun?" << endl;
        cout << "A). China" << endl;
        cout << "B). USA" << endl;
        cout << "C). Japan" << endl;
        cout << "D). Canada" << endl;
        cout << "Enter Your Option (A/B/C/D):: ";
        cin >> ans;
        if (ans == "C" || ans == "c") {
            cout << "\nYour Answer Was Correct! You Won 10,000/-" << endl;
            balance();
            x = 9;
        } else {
            cout << "\nWrong Answer. Here Is Your Path End Now" << endl;
            exit_game();
        }

    } else if (x == 9) {
        cout << "\nWhich Indian city is known as the 'City of Dreams'" << endl;
        cout << "A). Delhi" << endl;
        cout << "B). Bengaluru" << endl;
        cout << "C). Kolkata" << endl;
        cout << "D). Mumbai" << endl;
        cout << "Enter Your Option (A/B/C/D):: ";
        cin >> ans;
        if (ans == "D" || ans == "d") {
            cout << "\nYour Answer Was Correct! You Won 10,000/-" << endl;
            balance();
            x = 10;
        } else {
            cout << "\nWrong Answer. Here Is Your Path End Now" << endl;
            exit_game();
        }

    } else if (x == 10) {
        cout << "\nWho is the current President of India?" << endl;
        cout << "A). Rajendra Prasad" << endl;
        cout << "B). Dr. K. R. Narayanan" << endl;
        cout << "C). Ram Nath Kovind" << endl;
        cout << "D). Droupadi Murmu" << endl;
        cout << "Enter Your Option (A/B/C/D):: ";
        cin >> ans;
        if (ans == "D" || ans == "d") {
            cout << "\nYour Answer Was Correct! You Won 10,000/-" << endl;
            balance();
            exit_game();
        } else {
            cout << "\nWrong Answer. Here Is Your Path End Now" << endl;
            exit_game();
        }
    }
}


int main() {
    int choice = 100;

    cout << "Welcome To KBC Of Bhavya: \n" << endl;

    while (choice != 3) {
        cout << "Type 1 For Your Question" << endl;
        cout << "Type 2 To Check Your Balance" << endl;
        cout << "Type 3 To Exit" << endl;

        cout << "Enter Your Choice:: ";
        cin >> choice;

        if (choice == 1) {
            question();
        } else if (choice == 2) {
            balance(2);
        } else if (choice == 3) {
            exit_game();
            break; 
        } else {
            cout << "Wrong Option. Try Again::" << endl;
        }
    }

    return 0;
}