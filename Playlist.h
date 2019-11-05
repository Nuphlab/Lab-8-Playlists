#pragma once
#ifndef Playlist_h
#define Playlist_h
#include <string>
#include <vector>
#include <iostream>
#include "Playlist.h"

using namespace std;

class Playlist
{
public:
   Playlist(string playlistName);
   string GetName();

private:
   string name;
   vector<Playlist*> songPtr;
};

#endif 
