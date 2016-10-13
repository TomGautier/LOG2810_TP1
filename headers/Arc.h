/*
 * Arc.h
 *
 *  Created on: 2016-10-12
 *      Author: togaua
 */

#include "Sommet.h"

#ifndef ARC_H_
#define ARC_H_

class Arc
{

public:
	Arc();
	Arc(int distance, Sommet departure, Sommet arrival);
	~Arc();

private:
	int distance_;
	Sommet departure_;
	Sommet arrival_;
};


#endif /* ARC_H_ */
