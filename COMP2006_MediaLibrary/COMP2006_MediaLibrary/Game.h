//#ifndef _GAME_H_
//#define _GAME_H_

#pragma once
#include <string>

using namespace std;
#include <iostream>

class Game
{
public:
	//constructors
	Game() {};
	Game(const string &title, const string &platform, const string &genre, const int &year);

	//copy constructor
	Game(const Game &other);

	//destructor
	~Game();

	//getters
	const string get_title();
	const string get_platform();
	const string get_genre();
	const int get_year();

	//setters
	void set_title(const string &title);
	void set_platform(const string &platform);
	void set_genre(const string &genre);
	void set_year(const int &year);

	//custom methods
	const string get_game();

	void set_game(const string &title, const string &platform, const string &genre, const int &year);

private:
	string m_title;
	string m_platform;
	string m_genre;
	int m_year;
};

//#endif
