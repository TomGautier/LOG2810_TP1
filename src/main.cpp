/*
 * main.cpp
 *
 *  Created on: 2016-10-12
 *      Author: togaua
 */

#include <iostream>
#include <string>
#include "Graphe.h"
#include "Vehicule.h"

// CECI EST UN COMMENTAIRE PUSHED

using namespace std;

int main() {
	string message = "\nEntrez le numero correspondant a l'option desiree:\n"
			"1 : Entrer les caracteristiques du vehicule\n"
			"2 : Mettre a jour la carte\n"
			"3 : Determiner le plus court chemin\n"
			"4 : Quitter\n";
	int number = 0;
	Vehicule* vehicule = nullptr;

	while (number != 4)
	{
		cout << message << endl;
		cin >> number;

		if (number == 1)
		{
			string type;
			int autonomieMax, autonomieActuelle;

			cout << "Entrez caracteristiques du vehicules:\n"
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
				cout << "Parametres invalides. Veuillez recommencer.\n";
			}
		}
		else if (number == 2)
		{
			cout << "Veuillez entrer le nom du fichier a utiliser:" << endl;
			string nomFichierGraphe;
			cin >> nomFichierGraphe;
			cout << "creerGraphe(" << nomFichierGraphe << ");" << endl;
		}
		else if (number == 3)
		{
			if (vehicule != nullptr)
			{
				string depart, arrivee;
				cout << "Veuillez entrer le point de depart:" << endl;
				cin >> depart;
				cout << "Veuillez entrer le point d'arrivee:" << endl;
				cin >> arrivee;

				//Sommet sommetDepart = graphe.trouverSommet(depart);
				//Sommet sommetArrivee = graphe.trouverSommet(arrivee);
				cout << "determinerPlusCourtChemin(" << /*sommetDepart*/ depart << "," << /*sommetArrivee*/arrivee << ");" << endl;
			}
			else
			{
				cout << "Veuillez entrer les caracteristiques du vehicule avec l'option 1." << endl;
			}
		}
		else if (number == 4)
		{
			// on sort de la boucle avec la condition du while
			cout << "Programme termine." << endl;
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
				return listSommets [i];
			}
		}
	}
*/
