#include "Game.h"

// Game defintions
Game::Game() {};

Game::Game(const string &title, const string &platform, const string &genre, const int &year)
	: Media(title, genre, year)
{
	set_platform(platform);
};

// destructor 
Game::~Game()
{
	std::cout << "Done" << std::endl;
};


const string Game::get_platform()
{
	return m_platform;
}

// setters
void Game::set_platform(string platform)
{
	m_platform = platform;
};

// output
const string Game::output()
{
	return "Your game title is " + get_title() + '\n' + "The platform is " + get_platform() + '\n' + "The Genre is " + get_genre() + '\n' + " tracks in it" + '\n' + "It came out in the year " + to_string(get_year()) + "\n";
}