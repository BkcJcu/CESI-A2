#pragma once
#include "CLpoint.h"


class CLParcours {
protected:
	int taille;
	std::vector<CLPoint*> points;
public:
	void ajouterPoint(CLPoint* point);
	virtual double calculDistance() = 0;
	virtual void message() = 0;
};

class CLParcours2D : public CLParcours{
public:
	CLParcours2D(int taille);

	double calculDistance();
	void message();
};

class CLParcours3D : public CLParcours{
public:
	CLParcours3D(int taille);

	double calculDistance();
	void message();
};