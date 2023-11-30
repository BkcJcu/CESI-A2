#pragma once
#include "pch.h"

class CLPoint {
protected:
	double x;
	double y;
public:
	CLPoint(double x, double y);
	double getX(void);
	double getY(void);
	virtual double getZ(void);
	virtual void afficherCoordo(void);
};

class CLPoint3D : public CLPoint{
private:
	double z;
public:
	CLPoint3D(double x, double y, double z);
	double getZ();
	void afficherCoordo();
};