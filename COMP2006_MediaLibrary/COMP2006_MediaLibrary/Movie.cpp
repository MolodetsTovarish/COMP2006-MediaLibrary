#include "Movie.h"

// Movie defintions
Movie::Movie() {};

Movie::Movie(const string &title, const string &genre, const int &year, const int &runtime)
	: Media(title, genre, year, runtime)
{
	
};

// destructor 
Movie::~Movie()
{
	std::cout << "Done" << std::endl;
};

// setters


// getters

// output
const string Movie::output()
{
	return "Your movie title is " + get_title() + '\n' + "The Genre is " + get_genre() + '\n' + "It came out in the year " + to_string(get_year()) + '\n' + "And its total runtime is " + to_string(get_runtime()) + " minutes." + "\n";
}