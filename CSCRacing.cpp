//Krysta Parker
#include <iostream>
#include "Racetrack.h"
#include "GamePlay.h"

using namespace std;

//task to complete
//add:
//Abstraction -
//Encapsulation -
//Polymorphism -
//Inheritance -


GamePlay gameplay;
Racetrack track;    //Create RaceTrack object
ifstream trackFile;
string trackType;

//pre:users input for the track setting
//post:The track weight, car position, and track are set will needed information for the game
void SetUp();
//pre:The menu and setup function has been set
//post:A winner has been declared
void StartGame();
void track1();
void track2();
void track3();
void track4();


int main()
{
    char gameDone;

    cout << "   ___________ ______   ____             _            " << endl
	     << "  / ____/ ___// ____/  / __ \\____ ______(_)___  ____ _" << endl
	    << " / /    \\__ \\/ /      / /_/ / __ `/ ___/ / __ \\/ __ `/" << endl
	    << "/ /___ ___/ / /___   / _, _/ /_/ / /__/ / / / / /_/ / " << endl
	    << "\\____//____/\\____/  /_/ |_|\\__,_/\\___/_/_/ /_/\\__, /  " << endl
	    << "                                             /____/   " << endl;


    gameplay.menu();

    if(gameplay.option == 1){
        track1();
    }
    else if(gameplay.option == 2){
        track2();
    }
    else if(gameplay.option == 3){
        track3();
    }
    else if(gameplay.option == 4){
        track4();
    }
    else{
        cout << "Goodbye!";
        exit(0);
    }

    cout << "Are you done playing(y/n)? ";
    cin >> gameDone;

    if(toupper(gameDone) == 'N')
        cout << "Too bad!" << endl;

    cout << "Goodbye!" << endl;

    return 0;
}

void SetUp(){
    cout << "SetUp\n";

    // Display track and weights to verify accuracy
    track.displayWeights();
    track.displayTrack();
    cout << track.getTrack(1,8) << endl;
    track.setTrack(1,1, '1');
    track.setTrack(1,2, '2');
    track.setTrack(1,3, '3');
    track.displayTrack();

    cout << gameplay.option << endl;
}

void track1() {
    trackType = "/Users/krysta/Downloads/CourseProject_Starting_Code/track1.txt";
    trackFile.open(trackType);   //Create input object using a sample track
    track.read(trackFile); //Using text file to create track and weights
    track.setTrack(1,1, '1');
    track.setTrack(1,2, '2');
    track.setTrack(1,3, '3');
    track.displayTrack();
    cout << "DIMENSIONS: " << track.height() << " " << track.width() << endl;
    gameplay.game();

}

void track2() {
    trackType = "/Users/krysta/Downloads/CourseProject_Starting_Code/track2.txt";
    trackFile.open(trackType);   //Create input object using a sample track
    track.read(trackFile); //Using text file to create track and weights
    track.setTrack(16,1, '1');
    track.setTrack(16,2, '2');
    track.setTrack(16,3, '3');
    track.displayTrack();
    cout << "DIMENSIONS: " << track.height() << " " << track.width() << endl;
    gameplay.game();
}

void track3() {
    trackType = "/Users/krysta/Downloads/CourseProject_Starting_Code/track3.txt";
    trackFile.open(trackType);   //Create input object using a sample track
    track.read(trackFile); //Using text file to create track and weights
    track.setTrack(15,1, '1');
    track.setTrack(15,2, '2');
    track.setTrack(15,3, '3');
    track.displayTrack();
    cout << "DIMENSIONS: " << track.height() << " " << track.width() << endl;
    gameplay.game();
}

void track4() {
    trackType = "/Users/krysta/Downloads/CourseProject_Starting_Code/track4.txt";
    trackFile.open(trackType);   //Create input object using a sample track
    track.read(trackFile); //Using text file to create track and weights
    track.setTrack(1,1, '1');
    track.setTrack(1,2, '2');
    track.setTrack(1,3, '3');
    track.displayTrack();
    cout << "DIMENSIONS: " << track.height() << " " << track.width() << endl;
    gameplay.game();
}