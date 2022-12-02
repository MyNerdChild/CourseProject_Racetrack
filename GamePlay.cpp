//
// Created by Krysta Parker on 11/28/22.
//
#include <iostream>
#include "GamePlay.h"

using namespace std;

GamePlay::GamePlay() = default;

void GamePlay::menu() {

    cout << "Menu\n";

    option = 0;

    //Prompt menu with options of tracks or exit the program
    cout << "Please select a track to begin:" << endl
         << "1. track1.txt" << endl
         << "2. track2.txt" << endl
         << "3. track3.txt" << endl
         << "4. track4.txt" << endl
         << "5. exit.txt" << endl;
    cin >> option;

    if(option < 5 && option > 0)
    {
        //send to game settings
        setTrack(option);
    }
    else if(option == 5){
        exit(0);
    }
    else
    {
        menu();
    }
}

int GamePlay::setTrack(int option) {
    return option;
}
