/*
 * Vehicule.h
 *
 *  Created on: 2016-10-12
 *      Author: togaua
 */

#ifndef VEHICULE_H_
#define VEHICULE_H_

class Vehicule
{
public:
	Vehicule();
	Vehicule(std::string type, int autonomieMax, int autonomieActuelle)
		: type_(type), autonomieMax_(autonomieMax), autonomieActuelle_(autonomieActuelle) {} ;
	~Vehicule();
private:
	std::string type_;
	int autonomieMax_;
	int autonomieActuelle_;

};


#endif /* VEHICULE_H_ */
