/*
 * main.cpp
 *
 *  Created on: 2016-10-12
 *      Author: togaua
 */
#include <locale>
#include <iostream>
#include <string>
#include "Graphe.h"
#include "Vehicule.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "");    // makes accents printable

	string menu = "\nEntrez le numéro correspondant a l'option desirée:\n"
			"1 : Entrer les caracteristiques du vehicule\n"
			"2 : Mettre a jour la carte\n"
			"3 : Determiner le plus court chemin\n"
			"4 : Quitter\n";
	int option = 0;
	Vehicule* vehicule = nullptr;

	while (option != 4)
	{
		cout << menu << endl;
		cin >> option;

		if (option == 1)
		{
			string type;
			int autonomieMax, autonomieActuelle;

			cout << "Entrez caractéristiques du véhicules:\n"
				<< "- Type de carburant (essence, elec ou multi) :" << endl;
			cin >> type;
			cout << "- Autonomie maximale (entier positif) : " << endl;
			cin >> autonomieMax;
			cout << "- Autonomie actuelle (entier positif) : " << endl;
			cin >> autonomieActuelle;

			// verification de la validite des parametres
			if ((type == "essence" || type == "elec" || type == "multi")
					&& autonomieMax > 0
					&& autonomieActuelle > 0
					&& autonomieActuelle <= autonomieMax)
			{
				if (vehicule != nullptr)
				{
					delete vehicule;
				}
				cout << "vehicule = new Vehicule(" << type << "," << autonomieMax << "," << autonomieActuelle << ");" << endl;
			}
			else
			{
				cout << "Paramètres invalides. Veuillez recommencer.\n";
			}
		}
		else if (option == 2)
		{
			cout << "Veuillez entrer le nom du fichier à utiliser:" << endl;
			string nomFichierGraphe;
			cin >> nomFichierGraphe;
			cout << "creerGraphe(" << nomFichierGraphe << ");" << endl;
		}
		else if (option == 3)
		{
			if (vehicule != nullptr)
			{
				string depart, arrivee;
				cout << "Veuillez entrer le point de départ:" << endl;
				cin >> depart;
				cout << "Veuillez entrer le point d'arrivée:" << endl;
				cin >> arrivee;

				//Sommet sommetDepart = graphe.trouverSommet(depart);
				//Sommet sommetArrivee = graphe.trouverSommet(arrivee);
				cout << "determinerPlusCourtChemin(" << /*sommetDepart*/ depart << "," << /*sommetArrivee*/arrivee << ");" << endl;
			}
			else
			{
				cout << "Veuillez entrer les caractéristiques du véhicule avec l'option 1." << endl;
			}
		}
		else if (option == 4)
		{
			// on sort de la boucle avec la condition du while
			cout << "Programme terminé." << endl;
		}
		else
		{
			cout << "Option non reconnue. Veuillez entrer un chiffre valide." << endl;
		}
	}

	return 0;
}


/*Sommet trouverSommet(std::string identifiant)
	{
		for (int i = 0; i < listSommets_.size(); i++)
		{
			if (listSommets_[i].getIdentifiant == identifiant)
			{
				return listSommets_[i];
			}
		}
	}
*/
