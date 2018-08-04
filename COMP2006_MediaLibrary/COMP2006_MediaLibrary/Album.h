//#ifndef _ALBUM_H_
//#define _ALBUM_H_

#pragma once
#include <string>

using namespace std;
#include <iostream>

class Album
{
public:
	//constructors
	Album() {};
	Album(const string &title, const string &artist, const string &genre, const int &num_of_tracks, /*tracks (list of tracks),*/ const int &year, const float &runtime);

	//copy constructor
	Album(const Album &other);

	//destructor
	~Album();

	//getters
	const string get_title();
	const string get_artist();
	const string get_genre();
	const int get_num_of_tracks();
	const int get_year();
	const float get_runtime();

	//setters
	void set_title(const string &title);
	void set_artist(const string &artist);
	void set_genre(const string &genre);
	void set_num_of_tracks(const int &num_of_tracks);
	void set_year(const int &year);
	void set_runtime(const float &runtime);

	//custom methods
	const string get_album();

	void set_album(const string &title, const string &artist, const string &genre, const int &num_of_tracks, /*tracks (list of tracks),*/ const int &year, const float &runtime);

private:
	string m_title;
	string m_artist;
	string m_genre;
	int m_num_of_tracks;
	int m_year;
	float m_runtime;
};

//#endif