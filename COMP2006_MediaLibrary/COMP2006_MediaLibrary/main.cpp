#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include"Media.h"
#include "Album.h"

using namespace std;

template <typename T>

// our function will simply ask a question and set a referenced variable value
void const get_input(const string question, T &input) { // see? see the T?
														// our sentinel to kill the loop
	bool pass = false;
	// if we're not passing let's keep asking
	while (!pass) {
		// ask the question
		cout << question << endl;
		// store the answer
		cin >> input;
		// if everything is good, we can set pass to true and continue to the next condition check
		if (cin.good()) {
			pass = true;
			continue;
		}

		// otherwise we'll announce an error and ask them to try again
		cout << "Please enter a correct value." << endl;
		// this clears the current input buffer
		cin.clear();
		// this ignores anything that may have been sitting in the input buffer up to the next new line
		//character
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

	

int main()
{
	vector <Media*> mediaobjects;
	
	string title;
	string artist;
	string genre;
	int num_of_tracks;
	int year;
	int runtime;

	cout << "Enter a Title for the Album: ";
	cin >> title;


	cout << "Enter a Artist for the Album ";
	cin >> artist;
	

	cout << "Enter a genre for the Album: ";
	cin >> genre;
	

	cout << "Enter how many tacks are in the Album: ";
	cin >> num_of_tracks;
	

	cout << "Enter what year the Album came out: ";
	cin >> year;


	cout << "Enter the runtime of the Album (in mintues): ";
	cin >> runtime;

	//Media album{title, artist, genre, num_of_tracks, year, runtime};

	mediaobjects.push_back(new Album{ title, artist, genre, num_of_tracks, year, runtime });

	for (auto mediaobject : mediaobjects)
	{
		mediaobject->output();
	}

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}
