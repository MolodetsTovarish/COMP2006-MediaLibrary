#include "Album.h"

	// Album defintions
	Album::Album() {};

	Album::Album(const string title, const string artist, const string genre, const int num_of_tracks, const int year, const int runtime)
	: Media(title, genre, year, runtime)
	{
		set_artist(artist);
		set_num_of_tracks(num_of_tracks);
	};

	// destructor 
	Album::~Album()
	{
		std::cout << "Done" << std::endl;
	};

	// setters

	void Album::set_artist(string artist)
	{
		m_artist = artist;
	};


	void Album::set_num_of_tracks(const int num_of_tracks)
	{
		m_num_of_tracks = num_of_tracks;
	}


	// getters
	const string Album::get_artist()
	{
		return m_artist;
	}

	const int Album::get_num_of_tracks()
	{
		return m_num_of_tracks;
	}

	// output
	const string Album::output()
	{
		return "your album title is " + get_title() + ", the artist is "+ get_artist() + ", the Genre is " + get_genre() + ", It has " + to_string(get_num_of_tracks()) + " tracks in it, it came out in the year " + to_string(get_year()) + " and its total runtime is " + to_string(get_runtime()) + " minutes.";
	}


