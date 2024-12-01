#include <iostream>
using namespace std;

int main() {

    string playerName;
    string yesOrNo;
    bool choicesMade[4][2] = {false, false, false, false, false, false, false, false}; //setting up choice matrix
    //think of it as the first box being the choice number, and the second box being if the decision was good(0) or bad(1) -TA
    int currentChoice = 0;

    //beginning game, welcoming player, taking name
    cout << "Welcome to the game!" << endl << "To begin, please name your character" << endl;
    cout << "My name is: ";
    cin >> playerName;

    //final welcome before game starts. I can code in an outline, and we can discuss finer points later -TA
    cout << "Welcome " << playerName << "!" << endl << endl;
    cout << "How to play:" << endl << endl << "1) You will be given a selection of choices. Press the corresponding number on your keyboard, then the Enter key to lock in your answer";
    cout << endl << "2) Each choice you make is important! Think carefully before making your choice" << endl;
    cout << "3) Most importantly, have fun!";
    cout << endl << endl<< "Are you ready to play? (y/n) ";


    //the "are you ready" while loop. Built in contingency if y or n isn't entered -TA
    while (yesOrNo != "y" && yesOrNo != "n" && yesOrNo != "Y" && yesOrNo != "N") {
        cin >> yesOrNo;
        if (yesOrNo == "y" || yesOrNo == "Y") {
            cout << "Great! Let's begin";
        } else if (yesOrNo == "n" || yesOrNo == "N") {
            cout << "Too bad, so sad. Let's begin";
        } else {
            cout << "I see what you're trying here. Let's run this back and try again." << endl;
            cout << "Are you ready to play? (y/n) ";
        }
    }

    cout << endl << endl;
    //first scenario
    cout << "//scenario 1 - how to build a fire" << endl;


    while (currentChoice != 1 && currentChoice != 2) {
        cout << "Do you:" << endl << "1) //bad choice" << endl << "2) //good choice" << endl;
        cout << "(1 or 2) ";
        cin >> currentChoice;
        if (currentChoice == 1) {
            //choice 1 bad option
            choicesMade[0][1] = true;
        } else if (currentChoice == 2) {
            //choice 1 good action
            choicesMade[0][0] = true;
        } else {
            cout << "Wow, we got a funny guy here. Let's run it back and try again\n";
        }
    }
    //reset current choice
    currentChoice = 0;
    cout << endl << endl;

    cout << "//scenario 2 - whosamawhatsit" << endl;

    while (currentChoice != 1 && currentChoice != 2) {
        cout << "Do you:" << endl << "1) //good choice" << endl << "2) //bad choice" << endl;
        cout << "(1 or 2) ";
        cin >> currentChoice;
        if (currentChoice == 1) {
            //choice 2 good option
            choicesMade[1][0] = true;
        } else if (currentChoice == 2) {
            //choice 2 bad option
            choicesMade[1][1] = true;
        } else {
            cout << "You and I both know that you know how to play. Let's run it back and try again\n";
        }
    }
    //reset current choice
    currentChoice = 0;

    cout << endl << endl;

    cout << "//scenario 3 - whatchamacallit" << endl;

    while (currentChoice != 1 && currentChoice != 2) {
        cout << "Do you:" << endl << "1) //good choice" << endl << "2) //bad choice" << endl;
        cout << "(1 or 2) ";
        cin >> currentChoice;
        if (currentChoice == 1) {
            //choice 3 good option
            choicesMade[2][0] = true;
        } else if (currentChoice == 2) {
            //choice 3 bad option
            choicesMade[2][1] = true;
        } else {
            cout << "You and I both know that you know how to play. Let's run it back and try again\n";
        }
    }
    //reset current choice
    currentChoice = 0;

    cout << endl << endl;

    cout << "//scenario 4 - howsamadosit" << endl;

    while (currentChoice != 1 && currentChoice != 2) {
        cout << "Do you:" << endl << "1) //bad choice" << endl << "2) //good choice" << endl;
        cout << "(1 or 2) ";
        cin >> currentChoice;
        if (currentChoice == 1) {
            //choice 4 bad option
            choicesMade[3][1] = true;
        } else if (currentChoice == 2) {
            //choice 4 good option
            choicesMade[3][0] = true;
        } else {
            cout << "You and I both know that you know how to play. Let's run it back and try again\n";
        }
    }
    //reset current choice
    currentChoice = 0;

    //at the end of the game, depending on choices (checked by the choice matrix)
    //we can do a series of if statements (preferably put neatly into a function)
    //if we want more branching pathways earlier on, we need to know exact story
    //and atm, I can't look at the google doc. I will later though and adjust from there
    //PLEASE COMMENT YOUR CODE WHEN POSSIBLE
    //and make note of your changes when pushing to git. Also, sign your comments -TA

    return (0);
}
