#include <iostream>
#include <vector>
#include <string>
#include "Song.h"
#include "Playlist.h"

using namespace std;

void AddSong(vector<Song*>& newSong) {
   string nameOfSong;
   string firstLine;
   while (nameOfSong != "STOP") {
      cout << "Song name:" << endl;
      getline(cin, nameOfSong);
      if (nameOfSong != "STOP") {
         cout << "Song's first line:" << endl;
         getline(cin, firstLine);
         Song* newestSong = new Song(nameOfSong, firstLine);
         newSong.push_back(newestSong);
      }
   }
}
void ListSongs(vector<Song*>& newSong) {
   for (int i = 0; i < newSong.size(); ++i) {
      cout << newSong.at(i)->GetName() << ": \"" << newSong.at(i)->GetFirstLine() << "\", " << newSong.at(i)->GetPlays() << " Play(s)." <<  endl;
   }
}

void AddPlaylists(vector<Playlist>& pList) {
   string userIn;
   cout << "Playlist name:" << endl;
   getline(cin, userIn);
   pList.push_back(userIn);
}
void ListPlaylists(vector<Playlist>& pList) {
   for (int i = 0; i < pList.size(); ++i) {
      cout << i + 1 << pList.at(i).GetName() << endl;
   }
}
void AddSongToPlaylist() {

}

int main() {
   string userOption;
   string userIn;
   vector<Song*> songs;
   vector<Playlist> playlists;

   cout << "Welcome to the Firstline Player!  Enter options to see menu options." << endl << endl;
   cout << "Enter your selection now:" << endl << endl;
   cin >> userOption;
   cin.ignore();

   while (userOption != "quit") {
      if (userOption == "add") {
         cout << "Read in Song names and first lines (type \"STOP\" when done):" << endl;
         AddSong(songs);
      }
      else if (userOption == "list") {
         ListSongs(songs);
      }
      else if (userOption == "addp") {
         AddPlaylists(playlists);

      }
      else if (userOption == "addsp") {
         int listIndex;
         int songIndex;
         ListPlaylists(playlists);
         cout << "Pick a playlist index number:" << endl;
         cin >> listIndex;
         cin.ignore();
         cout << playlists.at(listIndex).GetName() << endl;
         ListSongs(songs);
         cout << "Pick a song index number:" << endl;
         cin >> songIndex;
         cin.ignore();
         cout << songs.at(songIndex)->GetName() << endl;
         AddSongToPlaylist();
      }
      else if (userOption == "listp") {
         ListPlaylists(playlists);
         for (int i = 0; i < playlists.size(); ++i) {
            playlists.at(i).GetName();
         }
      }
      else if (userOption == "play") {

      }
      else if (userOption == "remp") {

      }
      else if (userOption == "remsp") {

      }
      else if (userOption == "remsl") {

      }
      else if (userOption == "options") {
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

      }
      else {
         if (userOption != "add" && userOption != "list" && userOption != "addp" && userOption != "addsp" && userOption != "listp" && userOption != "play" && userOption != "remp" && userOption != "remsp" && userOption != "remsl" && userOption != "options" && userOption != "quit") {
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
         }
      }
      cout << "Enter your selection now:" << endl;
      cin >> userOption;
      cin.ignore();
   }
   cout << "Goodbye!" << endl;

   return 0;
}