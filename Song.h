#pragma once
#ifndef Song_h
#define Song_h
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song {
public:
    Song(string song = "", string firstLine = "");
    string GetName();
    string GetFirstLine();
private:
    string songName;
    string songLine;
    int count;
};

#endif 
