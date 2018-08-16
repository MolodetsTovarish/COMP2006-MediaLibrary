#include <iostream>
#include <string>
#include <vector>
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
}//end of get_input

/*
	The init
*/
int main()
{
	vector<Album*> albums;

	//
	int userSelection;
	//Welcome message
	cout << "Welcome to the Media Organizer\n" << "Created by Ross Keddy, Branden Shirriff, and Misha Okner\n\n" << endl;

	/*
	*	The user interface
	*/
	do
	{
		char status = 'y';
		userSelection = 3;

		cout << "**************************" << endl;
		cout << "Please Select an Option" << endl;
		cout << "1) Add an Album" << endl;
		cout << "2) Display Current Albums" << endl;
		get_input("3) Exit\n**************************", userSelection);

		switch (userSelection)
		{
		case 1: //Adding an artist
			 do
			 {
				string title;
				string artist;
				string genre;
				int num_of_tracks;
				int year;
				int runtime;

				get_input("What is the title of the album? ", title);
				get_input("What is the artist's name? ", artist);
				get_input("What is the genre of the album? ", genre);
				get_input("How many tracks are there? ", num_of_tracks);
				get_input("What year was the album released? ", year);
				get_input("What is the runtime for the album? ", runtime);

				albums.push_back(new Album{ title, artist, genre, num_of_tracks, year, runtime });

				get_input("Do you want to add another album? (y or n)", status);
			 } while (status != 'n');
			break;

		case 2: //Display the artists
			 for (auto album : albums)
			 {
				cout << album->output() << endl;
			 }
			 break;

		case 3: //Exit the system
			 break;

		default: //Put something in me
			 userSelection = 3;
			 break;
		}//End of switch
	} while (userSelection != 3); //End of loop


	//Exit protocol
	cout << "Press enter to exit." << endl;

	//Clear buffer
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}//End of main