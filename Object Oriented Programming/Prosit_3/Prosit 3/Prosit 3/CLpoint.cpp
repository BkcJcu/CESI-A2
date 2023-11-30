#include "pch.h"

CLPoint::CLPoint(double x, double y) {
	this->x = x;
	this->y = y;
}

double CLPoint::getX() {
	return this->x;
}

double CLPoint::getY() {
	return this->y;
}

double CLPoint::getZ() {
	return 0.0;
}

void CLPoint::afficherCoordo() {
	cout << "Coordonn�es : " << this->x << " ; " << this->y << endl;
}

CLPoint3D::CLPoint3D(double x, double y, double z) : CLPoint(x, y) {
	this->z = z;
}

double CLPoint3D::getZ() {
	return z;
}

void CLPoint3D::afficherCoordo() {
	cout << "Coordonn�es : " << this->x << " ; " << this->y << " ; " << this->z <<  endl;
}