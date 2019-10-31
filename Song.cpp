#include "Song.h"

Song::Song() {
   songName = "none";
   vector<Song*> newSong;
}
Song::Song(string song, vector<Song*> newSong) {
   songName = song;
   songs = newSong;
}
void Song::AddSong(string name) {
   songs.push_back(name);
}
void Song::ListSongs() {
   for (int i = 0; i < songs.size(); ++i) {
      cout << i << ": " << songs.at(i) << endl;
   }
}