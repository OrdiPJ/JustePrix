// Ajout des fichiers d'en-tete
#include <iostream>
#include <string>
#include <random>

int main()
{
	// Titre de l'onglet
	system("TITLE Jeu du Juste Prix");

	// Déclaration des variables :
	std::string user;
	int num{ 0 };
	int userNum{0};
	int ess{0};
	int diff{ 0 };

	// Génération d un nombre aleatoire
	std::random_device rd;
	std::mt19937 gen(rd());
	

	// Affichage du nom de l'utilisateur + choix de difficulté
	std::cout << "Entre ton nom : ";
	std::getline(std::cin, user);
	std::cout << "Bonjour " << user << " bienvenue au jeu du juste prix !\nChoisie une difficulte (1,2,3) : ";
	std::cin >> diff;

	switch (diff)
	{
	case 1:
		std::cout << "\nTu as choisi la difficulté facile, to but est de trouver le nombre compris entre 0 et 256\n";
		num = std::generate_canonical<double, 10>(gen) * 256;
		break;
	case 2:
		std::cout << "\nTu as choisi la difficulté moyenne, to but est de trouver le nombre compris entre 0 et 512\n";
		num = std::generate_canonical<double, 10>(gen) * 512;
		break;
	case 3:
		std::cout << "\nTu as choisi la difficulté difficile, to but est de trouver le nombre compris entre 0 et 1024\n";
		num = std::generate_canonical<double, 10>(gen) * 1024;
		break;
	default:
		break;
	}
	
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