//#ifndef _TV_H_
//#define _TV_H_

#pragma once
#include <string>
#include <iostream>

using namespace std;

class TV
{
public:
	//constructors
	TV();
	TV(const string title, const string genre, const int num_of_episodes, /*episodes (list of episodes),*/ const int year, const float runtime);
	
	//copy constructor
	TV(const TV &other);

	//destructor
	~TV();

	//getters
	const string get_title();
	const string get_genre();
	const int get_num_of_episodes();
	const int get_year();
	const float get_runtime();

	//setters
	void set_title(const string title);
	void set_genre(const string genre);
	void set_num_of_episodes(const int num_of_episodes);
	void set_year(const int year);
	void set_runtime(const float runtime);

	//custom methods
	const string get_tv();

	void set_tv(const string &title, const string &genre, const int &num_of_episodes, /*episodes (list of episodes),*/ const int &year, const float &runtime);

private:
	string m_title;
	string m_genre;
	int m_num_of_episodes;
	int m_year;
	float m_runtime;
};

//#endif