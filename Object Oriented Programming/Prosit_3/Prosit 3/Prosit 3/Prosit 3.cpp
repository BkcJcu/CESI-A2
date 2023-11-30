#include "pch.h"


void main(void)
{	int pause;

	CLPoint* p1;
	CLPoint* p2;
	CLPoint* p3;
	CLParcours* parcours;

	p1 = new CLPoint(0.0, 0.0);
	p2 = new CLPoint(1.0, 1.0);
	p3 = new CLPoint(2.0, 2.0);
	parcours = new CLParcours2D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);
	
	cout << parcours->calculDistance() << endl;
	parcours->message();

	p1 = new CLPoint3D(0.0, 0.0, 0.0);
	p2 = new CLPoint3D(1.0, 1.0, 1.0);
	p3 = new CLPoint3D(2.0, 2.0, 2.0);
	parcours = new CLParcours3D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	cout << parcours->calculDistance() << endl;
	parcours->message();
	
	p1 = new CLPoint(0.0, 0.0);
	p2 = new CLPoint3D(1.0, 1.0, 1.0);
	(p1 = p2)->afficherCoordo();

	cin >> pause;

	delete p1;
	delete p2;
	delete p3;

	delete parcours;
}
