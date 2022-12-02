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
    void menu();
    int setTrack(int option);
    void game();
    void player();
    void cpu1();
    void cpu2();

    int option;


};


#endif //COURSEPROJECT_STARTING_CODE_GAMEPLAY_H
