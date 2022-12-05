//
// Created by Krysta Parker on 11/28/22.
//
#include <iostream>
#include "GamePlay.h"
#include "cars.h"

using namespace std;

Racetrack track;    //Create RaceTrack object

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

}

void GamePlay::game() {
    cout << "game function" << endl;

    int randomNum = randomUserStart();
    cout << randomNum << endl;

    /*do{
        cout << "CAR ID: 1 Coordinates: 1,1 Max Speed: 5 Velocity: 0,0" << endl
             << "CAR ID: 2 Coordinates: 1,2 Max Speed: 5 Velocity: 0,0" << endl
             << "CAR ID: 3 Coordinates: 1,3 Max Speed: 5 Velocity: 0,0" << endl;

        switch (randomNum) {
            case 1: player();
                    randomNum+=1;   //now equals 2
                    break;
            case 2: cpu1();
                    randomNum+=1;   //now equals 3
                    break;
            case 3: cpu2();
                    randomNum=1;   //now equals 2
                    break;
        }
    }while(gameEnd() == false);*/

}

void GamePlay::player() {
    int x, y;
    cout << "player's turn" << endl;
    cout << "Enter X Coordinate: ";
    cin >> x;   //0-end
    cout << "Enter X Coordinate: ";
    cin >> y;   //0 - -end
    if(velocity)
    track.setTrack( x,y, '1');
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
    int rn1 = randomNum();

    if(rn1 == 1){
        cout << "Car 1 wins" << endl;
        return true;
    }
    else if(rn1 == 5){
        cout << "Car 2 wins" << endl;

        return true;
    }
    else if(rn1 == 10){
        cout << "Car 3 wins" << endl;

        return true;
    }
    else{
        return false;
    }
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
