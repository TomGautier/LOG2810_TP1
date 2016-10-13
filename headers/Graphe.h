/*
 * Graphe.h
 *
 *  Created on: 2016-10-12
 *      Author: togaua
 */

#ifndef GRAPHE_H_
#define GRAPHE_H_

#include "Arc.h"
#include "Sommet.h"

class Graphe
{
public:
	Graphe();
	~Graphe();

	void creerGraphe();
private:
	std::list<Arc> listArcs_;
	std::list<Sommet> listSommets_;
};


#endif /* GRAPHE_H_ */
