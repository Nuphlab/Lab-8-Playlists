#ifndef Song_h
#define Song_h
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Song {
public:
   Song();
   Song(string song, string firstLine);
   ~Song();
   string GetName();
   string GetFirstLine();
   int GetPlays();
   void AddToCount();
private:
   string songName;
   string songLine;
   int count;
};

#endif 