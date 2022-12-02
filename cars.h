//
// Created by Krysta Parker on 11/29/22.
//

#ifndef COURSEPROJECT_STARTING_CODE_CARS_H
#define COURSEPROJECT_STARTING_CODE_CARS_H


class cars {
public:
    cars();
    //pre:
    //post:

    //pre:
    //post:
    void userTurn();
    //pre:
    //post:
    void cpuTurn();

    int IDNumber{}; //used to display the cars position on the track
    int RowNumber{}; //used to identify the row of a cars position on the track
    int ColumnNumber{}; //used to identify the column of a cars position on the track

    int MaxSpeed{}; //number that determines how fast, or number of spaces a car may move in one turn

    /***Cannot exceed Max Speed***/
    int RowVelocity{}; //number tracking how many spaces up or down a car may move each turn.
    int ColumnVelocity{}; //number tracking how may spaces left or right a car may move each turn.  Cannot exceed Max Speed

};


#endif //COURSEPROJECT_STARTING_CODE_CARS_H
