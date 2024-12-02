#include <iostream>
using namespace std;

int main() {

    string playerName;
    string yesOrNo;
    bool choicesMade[6][2] = {false, false, false, false, false, false, false, false, false, false, false, false}; //setting up choice matrix
    //think of it as the first box being the choice number, and the second box being if the decision was good(0) or bad(1) -TA
    int currentChoice = 0;
    bool fireBig = false;

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
    cout << "It is a wonderful fall evening in the Lincoln National Park, and you are going to camp for the night! It's getting cold, and you decide to build a fire." << endl;
    cout << "You have some firewood and fire starters. Okay, " << playerName << "," << endl;


    while (currentChoice != 1 && currentChoice != 2) {
        cout << "Do you:" << endl << "1) haphazardly throw it together and slap some lighter fluid on it? Or do you:" << endl << "2) build it very carefully and properly?" << endl;
        cout << "(1 or 2) ";
        cin >> currentChoice;
        if (currentChoice == 1) {
            choicesMade[0][1] = true;
            //choice 1 bad option
            cout << "Wow, it's a...giant flaming mess...";
        } else if (currentChoice == 2) {
            choicesMade[0][0] = true;
            //choice 1 good action
            cout << "Wow! That looks great!";
        } else {
            cout << "Wow, we got a funny guy here. Let's run it back and try again\n";
        }
    }
    //reset current choice
    currentChoice = 0;
    cout << endl << endl;

    cout << "You seem tired " << playerName << ", do you want to put out the fire?" << endl;

    while (currentChoice != 1 && currentChoice != 2) {
        cout << "Do you:" << endl << "1) try and put it out? Or do you: " << endl << "2) just leave it as it is?" << endl;
        cout << "(1 or 2) ";
        cin >> currentChoice;
        if (currentChoice == 1) {
            choicesMade[1][0] = true;
            //choice 2 good option
            if (choicesMade[0][0] == true) {
                cout << "Cool! It's completely out! Kind of defeats the point of this game though...";
                cout << "Game over!";
                return 0;
            } else {
                cout << "Hmmm, there's still some embers burning. Whelp, off to bed anyways.";
                fireBig = false;
            }
        } else if (currentChoice == 2) {
            choicesMade[1][1] = true;
            //choice 2 bad option
            // if good1 AND bad2 OR bad1 AND good2
            if (choicesMade[0][0] == true) {
                cout << "The fire is still going. Whelp, off to bed."; // need code to try again. If try again good=true then scenario 3.1, if bad=true (or bad1 AND bad2=true) then scenario 3.2
                fireBig = true;
            } else {
                cout << "The fire is still blazing, hot as before. Off to bed.";
                fireBig = true;
            }
        } else {
            cout << "You and I both know that you know how to play. Let's run it back and try again\n";
        }
    }
    //reset current choice
    currentChoice = 0;

    cout << endl << endl;

    cout << "Okay, it's the middle of the night, " << playerName << " and I think I hear something? Maybe see some weird lights outside our tent?" << endl;

    while (currentChoice != 1 && currentChoice != 2) {
        cout << "Do you:" << endl << "1) investigate? Or do you: " << endl << "2) just go back to sleep?" << endl;
        cout << "(1 or 2) ";
        cin >> currentChoice;
        if (currentChoice == 1) {
            choicesMade[2][0] = true;
            //choice 3 good option
            // 3.1 - small fire, higher chance of escape
            if (!fireBig) {
                //randomize me cap'n
            }
        } else if (currentChoice == 1) {
            choicesMade[2][0] = true;
            //choice 3 good option
            // 3.2 - big fire, lower chance of escape
            if (fireBig) {
                //randomize me smaller cap'n
            }
        } else if (currentChoice == 2) {
            choicesMade[2][1] = true;
            //choice 3 bad option
            cout << "Oh no! That was a fire, " << playerName << "! A BIG FIRE!";
                cout << "Game over!";
        } else {
            cout << "You and I both know that you know how to play. Let's run it back and try again\n";
        }
    }
    //reset current choice
    currentChoice = 0;

    cout << endl << endl;

    cout << "OH NO! THE FOREST IS ON FIRE, " << playerName << "! Wait! I think I heard someone yelling! Over there!" << endl;

// if small fire, can travel to the voice to rescue or choose to ignore
// if big fire, have no choice, have to ignore
    //assume the following code is for small fire
    
    while (currentChoice != 1 && currentChoice != 2) {
        cout << "Do we: " << endl << "1) run towards the voice! They may need help! Or do we: " << endl << "2) ignore it! We have to get  out of the forest fire!" << endl;
        cout << "(1 or 2) ";
        cin >> currentChoice;
        if (currentChoice == 1) {
            //choice 4 bad option
            cout << "Aw man, are you sure?";
                //repeat, if still no then "Okay, if you're sure..."
                // if yes then "Okay! Let's go!"
            choicesMade[3][1] = true;
        } else if (currentChoice == 2) {
            //choice 4 good option
            cout << "Okay! Let's go!";
            choicesMade[3][0] = true;
        } else {
            cout << "You and I both know that you know how to play. Let's run it back and try again\n";
        }
    }
    //reset current choice
    currentChoice = 0;


    // need setup for two more scenarios, going to find the voice and just running away. Three seperate paths, left/right/center. Set it so correct sequence
    // to leave is randomized. If running away, do three times. If finding voice, only choose twice. If found voice then only one choice to get out (always
    // correct, no matter the choice). If no found voice then two to get back, higher chance of correct choices getting out (as opposed to not going)
    //- TZ

    // yippee! ending scenario!! - TZ

    //at the end of the game, depending on choices (checked by the choice matrix)
    //we can do a series of if statements (preferably put neatly into a function)
    //if we want more branching pathways earlier on, we need to know exact story
    //and atm, I can't look at the Google doc. I will later though and adjust from there
    //PLEASE COMMENT YOUR CODE WHEN POSSIBLE
    //and make note of your changes when pushing to git. Also, sign your comments -TA

    return (0);
}
