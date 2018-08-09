#include "TV.h"


// TV defintions
TV::TV() {};

TV::TV(const string title, const string genre, const int num_of_episodes, const int year, const float runtime)
{
	set_title(title);
	set_genre(genre);
	set_num_of_episodes(num_of_episodes);
	set_year(year);
	set_runtime(runtime);
};

// destructor 
TV::~TV()
{
	std::cout << "Done" << std::endl;
};

// setters
void TV::set_title(string title)
{
	m_title = title;
};

void TV::set_genre(const string genre)
{
	m_genre = genre;
}

void TV::set_num_of_episodes(const int num_of_episodes)
{
	m_num_of_episodes = num_of_episodes;
}

void TV::set_year(const int year)
{
	m_year = year;
}

void TV::set_runtime(const float runtime)
{
	m_runtime = runtime;
}

// getters
const string TV::get_title()
{
	return m_title;
}

const string TV::get_genre()
{
	return m_genre;
}

const int TV::get_num_of_episodes()
{
	return m_num_of_episodes;
}


const int TV::get_year()
{
	return m_year;
}

const float TV::get_runtime()
{
	return m_runtime;
}
