#include "Playlist.h"
#include <iostream>
#include <string>

using namespace std;

Playlist::Playlist(string playlistName) {
   name = playlistName;
}
string Playlist::GetName() {
   return name;
}