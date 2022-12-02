//Krysta Parker
#include <iostream>
#include <fstream>
#include "Racetrack.h"
#include "GamePlay.h"


GamePlay gameplay;
Racetrack track;    //Create RaceTrack object
ifstream trackFile;

//pre:users input for the track setting
//post:The track weight, car position, and track are set will needed information for the game
void SetUp();
//pre:The menu and setup function has been set
//post:A winner has been declared
void StartGame();


using namespace std;


int main()
{
	cout << "   ___________ ______   ____             _            " << endl
	     << "  / ____/ ___// ____/  / __ \\____ ______(_)___  ____ _" << endl
	    << " / /    \\__ \\/ /      / /_/ / __ `/ ___/ / __ \\/ __ `/" << endl
	    << "/ /___ ___/ / /___   / _, _/ /_/ / /__/ / / / / /_/ / " << endl
	    << "\\____//____/\\____/  /_/ |_|\\__,_/\\___/_/_/ /_/\\__, /  " << endl
	    << "                                             /____/   " << endl;

	/**This is sample code for testing**/


    gameplay.menu();
    SetUp();
    StartGame();
}

void SetUp(){
    cout << "SetUp\n";

    if(gameplay.option == 1){
        trackFile.open("/Users/krysta/Downloads/CourseProject_Starting_Code/track1.txt");   //Create input object using a sample track
        track.read(trackFile); //Using text file to create track and weights
    }
    else if(gameplay.option == 2){
        trackFile.open("/Users/krysta/Downloads/CourseProject_Starting_Code/track2.txt");   //Create input object using a sample track
        track.read(trackFile); //Using text file to create track and weights
    }
    else if(gameplay.option == 3){
        trackFile.open("/Users/krysta/Downloads/CourseProject_Starting_Code/track3.txt");   //Create input object using a sample track
        track.read(trackFile); //Using text file to create track and weights
    }
    else{
        trackFile.open("/Users/krysta/Downloads/CourseProject_Starting_Code/track4.txt");   //Create input object using a sample track
        track.read(trackFile); //Using text file to create track and weights
    }

    // Display track and weights to verify accuracy
    track.displayWeights();
    track.displayTrack();

    cout << gameplay.option;
}

void StartGame(){
    char gameDone;
    cout << "StartGame\n";


    /****************The Game Ending********************/
    trackFile.close();

    cout << "Are you done playing(y/n)? ";
    cin >> gameDone;

    if(toupper(gameDone) == 'Y'){
        cout << "Goodbye!";
    }
    else{
        cout << "Too bad, BYE!";
    }
    exit(0);
}

