#include "Game.h"


// Game defintions
Game::Game() {};

Game::Game(string title, string platform, string genre, const int year)
{
	set_title(title);
	set_platform(platform);
	set_genre(genre);
	set_year(year);
};

// destructor 
Game::~Game()
{
	std::cout << "Done" << std::endl;
};

// setters
void Game::set_title(const string title)
{
	m_title = title;
};

void Game::set_platform(const string platform)
{
	m_platform = platform;
}

void Game::set_genre(const string genre)
{
	m_genre = genre;
}

void Game::set_year(const int year)
{
	m_year = year;
}

// getters
const string Game::get_title()
{
	return m_title;
};

const string Game::get_platform()
{
	return m_platform;
};

const string Game::get_genre()
{
	return m_genre;
}

const int Game::get_year()
{
	return m_year;
}
