#pragma once

#include <iostream>
#include <string>

using namespace std;

class Media
{
public:

	//getters
	const string get_title();

	const string get_genre();

	const int get_year();

	const float get_runtime();

	//setters
	void set_title(const string title);

	void set_genre(const string genre);

	void set_year(const int year);

	void set_runtime(const float runtime);



private:
	string m_title;

	string m_genre;

	int m_year;

	float m_runtime;
};

//#endif