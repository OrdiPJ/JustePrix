// Ajout des fichiers d'en-tete
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

int main()
{
	// Déclaration des variables :
	std::string user;
	int userNum{0};
	srand(time(NULL));
	int num = rand()%1024;
	int ess{ 1 };

	// Affichage du nom de l'utilisateur + but du jeu
	std::cout << "Entre ton nom : ";
	std::getline(std::cin, user);
	std::cout << "Bonjour " << user << " bienvenue au jeu du juste prix !\nTon but est de trouver un nombre generer aleatoirement comprit entre 1 et 1024\n";
	
	// Boucle tant que l'utilisateur n'a pas entrer le bon nombre
	while (userNum != num)
	{
		std::cout << "Entrez un nombre : ";
		std::cin >> userNum;

		if (userNum > num)
		{
			std::cout << "C'est moins !\n";
		}
		if (userNum < num)
		{
			std::cout << "C'est plus !\n";
		}
		ess++;
	}

	// L'utilisateur a trouver
	std::cout << "Bravo " << user << ", tu as trouve le nombre en " << ess << " essais !" << std::endl;

	system("PAUSE");
	return 0;
}