#include "GenerateNummber.h"
#include <random>
#include <iostream>

double* GenerateNummber::GenerateNumber(int diff)
{
	int num = { 0 };
	int maxNum = { 0 };
	double* r;
	r = new double[2];
	
	std::random_device rd;
    std::mt19937 gen(rd());

	switch (diff)
	{
	case 1:
		std::cout << "\nTu as choisi la difficulte facile, ton but est de trouver le nombre compris entre 0 et 256\n";
		r[0] = std::generate_canonical<double, 10>(gen) * 256;
		r[1] = 256;
		return r;
	case 2:
		std::cout << "\nTu as choisi la difficulte moyenne, ton but est de trouver le nombre compris entre 0 et 512\n";
		r[0] = std::generate_canonical<double, 10>(gen) * 512;
		r[1] = 512;
		return r;
	case 3:
		std::cout << "\nTu as choisi la difficulte difficile, ton but est de trouver le nombre compris entre 0 et 1024\n";
		r[0] = std::generate_canonical<double, 10>(gen) * 1024;
		r[1] = 1024;
		return r;
	default:
		return r;
	}
    return 0;
}
