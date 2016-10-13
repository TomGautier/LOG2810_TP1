/*
 * Sommet.h
 *
 *  Created on: 2016-10-12
 *      Author: togaua
 */

#include <iostream>

using namespace std;

#ifndef SOMMET_H_
#define SOMMET_H_

class Sommet
{
public:
	Sommet();
	Sommet(std::string identifiant, std::string type);
	~Sommet();

	std::list<Sommet> getSommetsVoisins();
private:
	std::string identifiant_;
	std::string type_;
	std::list<Sommet> sommetsVoisins_;

};


#endif /* SOMMET_H_ */
