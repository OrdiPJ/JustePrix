// Ajout des fichiers d'en-tete
#include <iostream>
#include <string>
#include <random>
#include "GenerateNummber.h"
#include "StartGame.h"
#include "User.h"

int main()
{
	// Titre de l'onglet
	system("TITLE Jeu du Juste Prix");

	GenerateNummber g;
	StartGame s;

	// Déclaration des variables :
	std::string user;
	int num{ 0 };
	int userNum{ 0 };
	int ess{ 0 };
	int diff{ 0 };
	int maxNum{ 0 };

	// Génération d un nombre aleatoire
	/*std::random_device rd;
	std::mt19937 gen(rd()); */


	// Affichage du nom de l'utilisateur + choix de difficulté
	User* usr;
	usr = s.Start();
	user = usr->usrName;
	diff = usr->diff;

	double* r = g.GenerateNumber(diff);
	num = r[0];
	maxNum = r[1];

	// Boucle tant que l'utilisateur n'a pas entrer le bon nombre
	while (userNum != num)
	{
		std::cout << "Entrez un nombre : ";
		std::cin >> userNum;

		ess++;

		if (userNum > num)
		{
			std::cout << "C'est moins !\n";
		}
		if (userNum < num)
		{
			std::cout << "C'est plus !\n";
		}
		if (userNum > maxNum)
		{
			ess--;
			std::cout << "Veuillez saisir un nombre compris entre 0 et " << maxNum << "\n";
		}
		if (userNum < 0)
		{
			ess--;
			std::cout << "Veuillez saisir un nombre compris entre 0 et " << maxNum << "\n";
		}

	}

	// L'utilisateur a trouver
	std::cout << "Bravo " << user << ", tu as trouve le nombre en " << ess << " essais !" << std::endl;

	system("PAUSE");
	return 0;
}