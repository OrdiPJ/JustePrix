// Ajout des fichiers d'en-tete
#include <iostream>
#include <string>
#include <random>

int main()
{
	// Déclaration des variables :
	std::string user;
	int num{ 0 };
	int userNum{0};
	int ess{0};

	// Génération d un nombre aleatoire
	std::random_device rd;
	std::mt19937 gen(rd());
	num = std::generate_canonical<double, 10>(gen) * 1024;
	

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