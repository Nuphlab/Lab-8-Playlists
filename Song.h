#pragma once
#ifndef Song_h
#define Song_h
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song
{
public:
   Song();
   Song(string song, vector<Song*> newSong);
   void AddSong(string name);
   void ListSongs();
private:
   string songName;
   vector<Song*> songs;
};

#endif 
