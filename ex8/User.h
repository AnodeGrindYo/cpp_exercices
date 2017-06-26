#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

#ifndef USER_H
#define USER_H

class User
{
private:
	string username;

public:
	// constructeurs et destucteur
	User(string username = "Dude");
	~User();
	// getters
	string getUsername();

	// setters
	void setUsername(string nom);

};

#endif