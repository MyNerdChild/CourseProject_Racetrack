//
// Created by Krysta Parker on 11/28/22.
//
#include "Racetrack.h"
#include "cars.h"

#ifndef COURSEPROJECT_STARTING_CODE_GAMEPLAY_H
#define COURSEPROJECT_STARTING_CODE_GAMEPLAY_H


class GamePlay: private cars{
public:
    GamePlay();
    //pre:program will display the "CSC Racing" message
    //post:user will choose an option from the menu that will pick from the 4 tracks or exit the program

    //pre: function is called
    //post: returns integer from input
    void menu();
    //pre: track is picked from menu function and startgame function calls the function in CSCRacing.cpp
    //post: the winner is declared
    void game();

    //pre: a players turn is finished
    //post: if a player/car cross the finish line return true, else return false and if gameEnd is true, display who is the winner
    bool gameEnd();

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

    int x;
    int y;
};


#endif //COURSEPROJECT_STARTING_CODE_GAMEPLAY_H
