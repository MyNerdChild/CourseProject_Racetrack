//
// Created by Krysta Parker on 11/28/22.
//
#include <iostream>
#include "GamePlay.h"
#include "cars.h"

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

void GamePlay::game() {
    cout << "game function" << endl;

    int randomNum = randomUserStart();
    cout << randomNum << endl;

    switch (randomNum) {
        case 1: player();
                break;
        case 2: cpu1();
                break;
        case 3: cpu2();
                break;
    }

    do{
        if(randomNum == 1)
        {
            randomNum=+1; // equals 2
            cpu1();
        }
        else if(randomNum == 2)
        {
            randomNum=+1; // equals 3
            cpu2();
        }
        else
        {
            randomNum = 1; // equals 1
            player();
        }

    }while(gameEnd() == false);

    winnerOrloser();

}

void GamePlay::player() {
    cout << "player's turn" << endl;
}

void GamePlay::cpu1() {
    cout << "cpu1's turn" << endl;
}

void GamePlay::cpu2() {
    cout << "cpu2's turn" << endl;

}

int GamePlay::randomUserStart() {
    cout << "randomUserStart function" << endl;

    int random_integer;
    int lowest=1, highest=3;
    int range=(highest-lowest)+1;

    srand(time(NULL));

    random_integer = lowest + rand() % range;
    cout << random_integer << endl;

    return random_integer;
}

bool GamePlay::gameEnd() {
    cout << "gameEnd function" << endl;

    if(randomNum() == 8){
        cout << "Car 1 wins" << endl;
        return true;
    }
    else if(randomNum() == 2){
        cout << "Car 2 wins" << endl;

        return true;
    }
    else if(randomNum() == 5){
        cout << "Car 3 wins" << endl;

        return true;
    }
    else{
        return false;
    }
}

string GamePlay::winnerOrloser() {
    return std::string();
}

//delete later
int GamePlay::randomNum() {
    cout << "rn function" << endl;


    int rn;
    int lowest=1, highest=10;
    int range=(highest-lowest)+1;

    srand(time(NULL));

    rn = lowest + rand() % range;
    cout << rn << endl;

    return rn;
}
