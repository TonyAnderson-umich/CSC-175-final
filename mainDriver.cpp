#include <iostream>
#include <cstdlib>
#include <ctime>
#include "./functions.cpp"
using namespace std;

int main() {

    string playerName;
    string yesOrNo;
    bool choicesMade[6][2] = {false, false, false, false, false, false, false, false, false, false, false, false}; //setting up choice matrix
    //think of it as the first box being the choice number, and the second box being if the decision was good(0) or bad(1) -TA
    int currentChoice = 0;
    bool fireBig = false;
    bool goodDirection = false;
    string chosenDirection = "bleh";
    srand(time(0));


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


    //choice 1
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

/*
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
*/

//I commented out the original fire extinguishing scenario and replaced it with the simpler fire extinguishing scenario that we discussed.
//The original scenario is still here if we decide to return to it.
//The new scenario removes the choice to try extinguishing the fire a second time and replaces it with three choices:
//1) Putting the fire out completely. 2) Dimming the fire a bit. 3) Leaving it as it is.
//If the player made a good choice previously and created a nice fire, then option 1 would game over, option 2 would make a small fire,
//and option 3 would make a big fire.
//If the player made a bad choice previously and created a crappy fire, then the player's efforts would be unsuccessful, and
//option 3 would override, making a big fire.
//Following the proper procedures to making a fire is important, or else fires will be difficult to control.
//If you don't like the override idea, then you're welcome to change it. Don't worry, you won't hurt my feelings. ;)
//Also, Toby, don't forget to look into making the wolf attack survival scenario. - AH

    //choice 2
    while (currentChoice != 1 && currentChoice != 2 && currentChoice != 3) {
        cout << "Do you:" << endl << "1) try and put it out? Or do you: " << endl << "2) dim the fire a bit? Or do you: " << endl << "3) just leave it as it is?" << endl;
        cout << "(1 or 2 or 3) ";
        cin >> currentChoice;
        if (choicesMade[0][1] == true) {
            //If you made a crappy fire, then you aren't able to extinguish it.
            //You can change the dialogue if you want.
            if (currentChoice == 1) {
                cout << "You were unable to put out your flaming mess of a fire!" << endl;
            } else if (currentChoice == 2) {
                cout << "You were unable to dim your flaming mess of a fire!" << endl;
            } else {
                cout << "This hot mess of a fire is still... well, a hot mess. Nonetheless, sleep will find you soon enough";
            }
            cout << "The fire is still blazing, hot as before. Whelp, off to bed.";
            fireBig = true;
        } else if (currentChoice == 1) {
            choicesMade[1][1] = true;
            //choice 2 bad option
            cout << "Cool! It's completely out! Kind of defeats the point of this game though...";
            cout << "Game over!";
            return 0;
        } else if (currentChoice == 2) {
            choicesMade[1][0] = true;
            //choice 2 good option and small fire
            cout << "Hmmm, there's still some embers burning. Whelp, off to bed anyways.";
            fireBig = false;
        } else if (currentChoice == 3) {
            choicesMade[1][0] = true;
            //choice 2 good option and big fire
            cout << "The fire is still blazing, hot as before. Whelp, off to bed.";
            fireBig = true;
        } else {
            cout << "You and I both know that you know how to play. Let's run it back and try again\n";
        }
    }
    //reset current choice
    currentChoice = 0;

    cout << endl << endl;

    cout << "Okay, it's the middle of the night, " << playerName << ", and I think I hear something? Maybe see some weird lights outside our tent?" << endl;

    //choice 3
    while (currentChoice != 1 && currentChoice != 2) {
        cout << "Do you:" << endl << "1) investigate? Or do you: " << endl << "2) just go back to sleep?" << endl;
        cout << "(1 or 2) ";
        cin >> currentChoice;
        if (currentChoice == 1) {
            choicesMade[2][0] = true;
            //choice 3 good option
            // 3.1 - small fire, higher chance of escape
            //the chance of survival if they have a small fire is 80%
            //make the percentage whatever you want - AH
            if (fireBig == false) {
                if ((rand() % 100 + 1) > 20) {
                    //the player lives
                }
                else {
                    //the player dies
                    cout << "Oh no! That was a fire, " << playerName << "! A BIG FIRE!";
                    cout << "Game over!";
                    return 0;
                }
            }
            // 3.2 - big fire, lower chance of escape
            //the chance of survival if they have a big fire is 50%
            //make the percentage whatever you want - AH
            if (fireBig == true) {
                if ((rand() % 100 + 1) > 50) {
                    //the player lives
                }
                else {
                    //the player dies
                    cout << "Oh no! That was a fire, " << playerName << "! A BIG FIRE!";
                    cout << "Game over!";
                    return 0;
                }
            }
        } else if (currentChoice == 2) {
            choicesMade[2][1] = true;
            //choice 3 bad option
            cout << "Oh no! That was a fire, " << playerName << "! A BIG FIRE!";
            cout << "Game over!";
            return 0;
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

    //choice 4
    while (currentChoice != 1 && currentChoice != 2) {
        cout << "Do we: " << endl << "1) run towards the voice! They may need help! Or do we: " << endl << "2) ignore it! We have to get out of the forest fire!" << endl;
        cout << "(1 or 2) ";
        cin >> currentChoice;
        if (currentChoice == 1) {
            //choice 4 bad option
            choicesMade[3][1] = true;
            cout << "Aw man. Well, if you're sure...";
                //repeat, if still no then "Okay, if you're sure..."
                // if yes then "Okay! Let's go!"

        } else if (currentChoice == 2) {
            choicesMade[3][0] = true;
            //choice 4 good option
            cout << "Okay! Let's go!";

        } else {
            cout << "You and I both know that you know how to play. Let's run it back and try again\n";
        }
    }
    //reset current choice
    currentChoice = 0;

    //choice 5
    cout << endl << endl;
    cout << "There's a split in the road here! Both paths look equally trodden, but I have a feeling that choosing the wrong path will lead to our doom";
    cout << endl << "Do we go: " << endl << "1) left, or" << endl << "2) right?";

    if (choicesMade[2][0]) {
        if ((rand() % 100 + 1) > 25) {
            goodDirection = true;
        } else {
            goodDirection = false;
        }
    } else if (choicesMade[2][1]) {
        if ((rand() % 100 + 1) > 50) {
            goodDirection = true;
        } else {
            goodDirection = false;
        }
    }

    while (currentChoice != 1 && currentChoice != 2) {
        cin >> currentChoice;
        if (currentChoice != 1 && currentChoice != 2) {
            cout << "You and I both know that you know how to play. Let's run it back and try again\n";
        } else if (currentChoice == 1) {
            chosenDirection = "left";
        } else if (currentChoice == 2) {
            chosenDirection = "right";
        }
    }
    if (goodDirection) {
        cout << "It looks like the " << chosenDirection << " path was the correct choice here. Thank goodness!";
    }



    currentChoice = 0;

    cout << endl << endl;
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
