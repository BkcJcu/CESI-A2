#include "pch.h"

void CLParcours::ajouterPoint(CLPoint* point) {
    points.push_back(point);
}


CLParcours2D::CLParcours2D(int taille) { 
    this->taille = taille; 
}

double CLParcours2D::calculDistance() {
    double distanceTotale = 0.0;
    for (size_t i = 0; i < this->taille - 1; ++i) {
        double dx = points[i]->getX() - points[i + 1]->getX();
        double dy = points[i]->getY() - points[i + 1]->getY();
        distanceTotale += sqrt(dx * dx + dy * dy);
    }
    return distanceTotale;
}

void CLParcours2D::message(){
    cout << "Parcours en 2D." << endl;
}

CLParcours3D::CLParcours3D(int taille) { 
    this->taille = taille; 
}

double CLParcours3D::calculDistance(){
    double distanceTotale = 0.0;
    for (size_t i = 0; i < this->taille - 1; ++i) {
        double dx = points[i]->getX() - points[i + 1]->getX();
        double dy = points[i]->getY() - points[i + 1]->getY();
        double dz = points[i]->getZ() - points[i + 1]->getZ();
        distanceTotale += sqrt(dx * dx + dy * dy + dz * dz);
    }
    return distanceTotale;
}

void CLParcours3D::message() {
    cout << "Parcours en 3D." << endl;
}