#pragma once
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
   Playlist(string playlistName);
   Playlist(string playlistName, vector<Song*> playlistPtr);
   string GetName();

private:
   string name;
   vector<Song*> songPtr;
};

#endif 
