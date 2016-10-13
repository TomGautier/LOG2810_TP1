/*
 * Graphe.cpp
 *
 *  Created on: 2016-10-12
 *      Author: togaua
 */

#include "Graphe.h"
#include <fstream>
Graphe::Graphe()
{


}

void Graphe::creerGraphe(std::string nomFichier)
{
    Sommet unSommet;
    Arc unArc;
	ifstream carte;
	carte.open(nomFichier);
	if(carte.fail())
		cout<<"Erreur d ouverture\n";
	else
	{
		while(carte.peek()!="\n")

		{
		   getline(carte,unSommet.identifiant_,',' );
		   getline(carte,unSommet.type_,';');
		   listSommets_.push_back(unSommet);

		}
			carte.ignore();
		while(carte.peek()!="\n")
		{
			getline(carte,unArc.departure_.identifiant_,',');
			getline(carte,unArc.arrival_.identifiant_,',');
			carte>>unArc.distance_;
			carte.ignore();
			listArcs_.push_back(unArc);
		}

	}


}


