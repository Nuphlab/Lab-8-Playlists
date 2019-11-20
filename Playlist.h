#ifndef Playlist_h
#define Playlist_h
#include <string>
#include <vector>
#include <iostream>
#include "Playlist.h"
#include "Song.h"

using namespace std;

class Playlist
{
public:
   Playlist();
   Playlist(string playlistName, vector<Song*> playlistPtr);
   ~Playlist();
   string GetName();
   void AddSongToList(Song* song);
   void GetSongLines();
   Song* GetPtr(int index);
   int GetSize();
   int NumberOfSongs();
   void ListSingleSong();
   void RemovePlaylistSong(int index);
   void CheckAndRemoveAll(string name);
private:
   string name;
   vector<Song*> songPtr;
};

#endif 
