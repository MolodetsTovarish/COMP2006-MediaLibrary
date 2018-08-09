#include "Album.h"


// Album defintions
Album::Album() {};

Album::Album(const string title, const string artist, const string genre, const int num_of_tracks, const int year, const float runtime)
{
	set_title(title);
	set_artist(artist);
	set_genre(genre);
	set_num_of_tracks(num_of_tracks);
	set_year(year);
	set_runtime(runtime);
};

// destructor 
Album::~Album()
{
	std::cout << "Done" << std::endl;
};

// setters
void Album::set_title(string title)
{
	m_title = title;
};

void Album::set_artist(string artist)
{
	m_artist = artist;
};

void Album::set_genre(const string genre)
{
	m_genre = genre;
}

void Album::set_num_of_tracks(const int num_of_tracks)
{
	m_num_of_tracks = num_of_tracks;
}

void Album::set_year(const int year)
{
	m_year = year;
}

void Album::set_runtime(const float runtime)
{
	m_runtime = runtime;
}

// getters
const string Album::get_title()
{
	return m_title;
}

const string Album::get_artist()
{
	return m_artist;
}

const string Album::get_genre()
{
	return m_genre;
}

const int Album::get_num_of_tracks()
{
	return m_num_of_tracks;
}


const int Album::get_year()
{
	return m_year;
}

const float Album::get_runtime()
{
	return m_runtime;
}
