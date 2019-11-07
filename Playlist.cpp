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
Playlist::~Playlist() {
}
string Playlist::GetName() {
   return name;
}
void Playlist::AddSongToList(Song* song) {
   songPtr.push_back(song);
}
int Playlist::NumberOfSongs() {
   return songPtr.size();
}
void Playlist::GetSongLines() {
   for (int i = 0; i < songPtr.size(); ++i) {
      cout << songPtr.at(i)->GetFirstLine() << endl;
   }
}
Song* Playlist::GetPtr(int index) {
   return songPtr.at(index);
}
int Playlist::GetSize() {
   return songPtr.size();
}
void Playlist::RemovePlaylistSong(int songIndexNumber, vector<Song*>& song) {
   for (int i = 0; i < song.size()) {
      if (i == songIndexNumber) {
         delete song.at(songIndexNumber);
      }
   }
}