//#ifndef _GAME_H_
//#define _GAME_H_

#pragma once
#include <string>
#include <iostream>
#include "Media.h"

using namespace std;

class Game : public Media
{
public:
	//constructors
	Game();
	Game(const string &title, const string &platform, const string &genre, const int &year);

	//copy constructor
	Game(const Game &other);

	//destructor
	~Game();

	//getters
	const string get_platform();

	//setters
	void set_platform(const string &platform);


	// custom output
	const string output();


private:
	string m_platform;
};

//#endif