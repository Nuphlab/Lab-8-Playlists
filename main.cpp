#include <iostream>
#include <vector>
#include <string>
#include "Song.h"
#include "Playlist.h"

using namespace std;

int main() {
    string userOption = "";
    
    cout << "Welcome to the Firstline Player!  Enter options to see menu options." << endl << endl;
    cout << "Enter your selection now:" << endl << endl;
    cin >> userOption;
    
    while (userOption != "quit") {
        while (userOption != "add" && userOption != "list" && userOption != "addp" && userOption != "addsp" && userOption != "listp" && userOption != "play" && userOption != "remp" && userOption != "remsp" && userOption != "remsl" && userOption != "options" && userOption != "quit") {
            
            cout << "add      Adds a list of songs to the library" << endl;
            cout << "list     Lists all the songs in the library" << endl;
            cout << "addp     Adds a new playlist" << endl;
            cout << "addsp    Adds a song to a playlist" << endl;
            cout << "listp    Lists all the playlists" << endl;
            cout << "play     Plays a playlist" << endl;
            cout << "remp     Removes a playlist" << endl;
            cout << "remsp    Removes a song from a playlist" << endl;
            cout << "remsl    Removes a song from the library (and all playlists)" << endl;
            cout << "options  Prints this options menu" << endl;
            cout << "quit     Quits the program" << endl << endl;
            
            cout << "Enter your selection now:" << endl;
            cin >> userOption;
            cout << userOption << userOption << endl; //remove test case
        }
        if (userOption == "add") {
            
        }
        else if(userOption == "list") {
            
        }
        else if(userOption == "addp") {
            
        }
        else if(userOption == "addsp") {
            
        }
        else if(userOption == "listp") {
            
        }
        else if(userOption == "play") {
            
        }
        else if(userOption == "remp") {
            
        }
        else if(userOption == "remsp") {
            
        }
        else if(userOption == "remsl") {
            
        }
        else if(userOption == "options") {
            cout << "add      Adds a list of songs to the library" << endl;
            cout << "list     Lists all the songs in the library" << endl;
            cout << "addp     Adds a new playlist" << endl;
            cout << "addsp    Adds a song to a playlist" << endl;
            cout << "listp    Lists all the playlists" << endl;
            cout << "play     Plays a playlist" << endl;
            cout << "remp     Removes a playlist" << endl;
            cout << "remsp    Removes a song from a playlist" << endl;
            cout << "remsl    Removes a song from the library (and all playlists)" << endl;
            cout << "options  Prints this options menu" << endl;
            cout << "quit     Quits the program" << endl << endl;
            
            cout << "Enter your selection now:" << endl;
            cin >> userOption;
            cout << userOption << endl; //remove test case
        }
    }
    cout << "Goodbye!" << endl;
    return 0;
}
