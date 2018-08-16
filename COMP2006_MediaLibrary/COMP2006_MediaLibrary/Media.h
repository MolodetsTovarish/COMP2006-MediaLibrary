#pragma once
#include <iostream>
#include <string>

using namespace std;

class Media
{
public:
	Media();
	//Constructor
	Media(string title, string genre, int year, int runtime);

	//Deconstructor
	//~Media();

	//getters
	const string get_title();
	const string get_genre();
	const int get_year();
	const int get_runtime();

	//setters
	void set_title(const string &title);
	void set_genre(const string &genre);
	void set_year(const int &year);
	void set_runtime(const int &runtime);

	// custom output
	const string output();
	
private:
	string m_title;
	string m_genre;
	int m_year;
	int m_runtime;
};

//#endif