#include "Song.h"

Song::Song() {
}
Song::Song(string name, string firstLine) {
   songName = name;
   songLine = firstLine;
   count = 0;
}
Song::~Song() {
   //delete songName;
   //delete songLine;
}
string Song::GetName() {
   return songName;
}
string Song::GetFirstLine() {
   return songLine;
}
int Song::GetPlays() {
   return count;
}
void Song::AddToCount() {
   ++count;
}