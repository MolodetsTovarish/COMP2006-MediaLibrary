#include <iostream>
#include <string>
#include <vector>
#include "Album.h"
#include "Book.h"
#include "Game.h"
#include "Movie.h"
#include "TV.h"

using namespace std;

template <typename T>

int main()
{
	Album Queen{ "me", "Queen", "rock", 13, 1997, 140 };

	cout << Queen.get_artist << endl

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}
