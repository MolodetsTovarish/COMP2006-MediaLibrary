//#ifndef _ALBUM_H_
//#define _ALBUM_H_

#pragma once
#include <string>
#include <iostream>
#include "Media.h"

using namespace std;

class Album: public Media 
{
public:
	//constructors
	Album();
	Album(const string title, const string artist, const string genre, const int num_of_tracks, /*tracks (list of tracks),*/ const int year, const int runtime);

	//copy constructor
	Album(const Album &other);

	//destructor
	~Album();

	//getters
	const string get_artist();
	const int get_num_of_tracks();


	//setters
	void set_artist(const string artist);
	void set_num_of_tracks(const int num_of_tracks);

	//custom methods
	//const string get_album();
	//void set_album(const string &title, const string &artist, const string &genre, const int &num_of_tracks, /*tracks (list of tracks),*/ const int &year, const int &runtime);

	// custom output
	const string output();


private:
	string m_artist;
	int m_num_of_tracks;
};

//#endif