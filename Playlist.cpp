#include "Playlist.h"
#include <iostream>
#include <string>

using namespace std;

Playlist::Playlist(string playlistName) {
   name = playlistName;
}
Playlist::Playlist(string playlistName, vector<Song*> playlistPtr) {
   name = playlistName;
   songPtr = playlistPtr;
}
/*void Playlist: GetSong(vector<Song*> pointerToSong) {
   songPtr = pointerToSong;
   return songPtr;
} */
string Playlist::GetName() {
   return name;
}