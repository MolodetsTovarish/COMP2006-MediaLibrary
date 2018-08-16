#include <iostream>
#include <string>
#include <vector>
#include"Media.h"
#include "Album.h"
#include "Book.h"
#include "Game.h"

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
	vector<Book*> books;
	vector<Game*> games;

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
		cout << "3) Add a Book" << endl;
		cout << "4) Display Current Books" << endl;
		cout << "5) Add a Game" << endl;
		cout << "6) Display Current Games" << endl;
		get_input("7) Exit\n**************************", userSelection);

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

		case 3: //Adding a book
			do
			{
				string title;
				string author;
				string genre;
				int num_of_pages;
				int year;

				get_input("What is the title of the Book? ", title);
				get_input("What is the authors's name? ", author);
				get_input("What is the genre of the book? ", genre);
				get_input("How many pages are there? ", num_of_pages);
				get_input("What year was the book released? ", year);

				books.push_back(new Book{ title, author, genre, num_of_pages, year});

				get_input("Do you want to add another book? (y or n)", status);
			} while (status != 'n');
			break;
			
		case 4: //Display the books
			for (auto book : books)
			{
				cout << book->output() << endl;
			}
			break;

		case 5: //Adding a Game
			do
			{
				string title;
				string platform;
				string genre;
				int year;

				get_input("What is the title of the Game? ", title);
				get_input("What is the game's platform? ", platform);
				get_input("What is the genre of the album? ", genre);
				get_input("What year was the game released? ", year);

				games.push_back(new Game{ title, platform, genre, year });

				get_input("Do you want to add another game? (y or n)", status);
			} while (status != 'n');
			break;

		case 6: //Display the games
			for (auto game : games)
			{
				cout << game->output() << endl;
			}
			break;

		case 7: //Exit the system
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