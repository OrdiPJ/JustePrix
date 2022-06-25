#include "StartGame.h"
#include "User.h"
#include <iostream>
#include <string>

User* StartGame::Start()
{
	std::string user;
	int diff = { 0 };

	std::cout << "Entre ton nom : ";
	std::getline(std::cin, user);
	std::cout << "Bonjour " << user << " bienvenue au jeu du juste prix !\nChoisie une difficulte (1,2,3) : ";
	std::cin >> diff;
	User* usr;
	usr = new User(user, diff);

	return usr;
}
