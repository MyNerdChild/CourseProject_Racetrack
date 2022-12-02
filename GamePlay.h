//
// Created by Krysta Parker on 11/28/22.
//
#include "Racetrack.h"
#ifndef COURSEPROJECT_STARTING_CODE_GAMEPLAY_H
#define COURSEPROJECT_STARTING_CODE_GAMEPLAY_H


class GamePlay {
public:
    GamePlay();
    //pre:program will display the "CSC Racing" message
    //post:user will choose an option from the menu that will pick from the 4 tracks or exit the program

    //pre: function is called
    //post: the input from user is chosen
    void menu();
    //pre: track is picked from menu function and startgame function calls the function in CSCRacing.cpp
    //post: the winner is declared
    void game();
    //pre:
    //post:
    int setTrack(int option);
    //pre: a players turn is finished
    //post: if a player/car cross the finish line return true, else return false
    bool gameEnd();
    //pre: if gameEnd is true
    //post: display who is the winner
    string winnerOrloser();

    //pre: function is called in game function
    //post: return one number between 1-3
    int randomUserStart();

    //pre:
    //post:
    void player();
    //pre:
    //post:
    void cpu1();
    //pre:
    //post:
    void cpu2();

    int option; //used for user input within menu function

    //delete later
    int randomNum();
};


#endif //COURSEPROJECT_STARTING_CODE_GAMEPLAY_H
