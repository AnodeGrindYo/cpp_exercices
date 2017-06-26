#include "User.h"

// constructeur et destucteur
User::User(string username)
{
	this->username = username;
}

User::~User()
{
	// ...
}

// getters
string User::getUsername()
{
	return username;
}


// setters
void User::setUsername(string nom)
{
	username = nom;
}
