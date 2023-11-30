#include "pch.h"
#include <iostream>
#include "coordonnees.h"

using namespace System;
using namespace std;

int main()
{
    while (true) {
        int x = 0;
        int y = 0;
        int x2 = 0;
        int y2 = 0;

        cout << "Veuillez rentrer les coordonnées du premier point (x puis y) :" << endl; cin >> x; cin >> y;
        cout << "Veuillez rentrer les coordoonées du deuxième points (x puis y) :" << endl; cin >> x2; cin >> y2;

        Coordonnees calcul(x, y, x2, y2);
        
        cout << "Coordonnées des points :" << endl;
        cout << "(" << calcul.getX() << " : " << calcul.getY() << ")" << endl << "(" << calcul.getX2() << " : " << calcul.getY2() << ")" << endl;
        calcul.calculDistance();
        cout << "Distance entre les deux points : " << calcul.getDistance() << endl;
        cout << "---------------------------------------------" << endl;
    }
 
    return 0;
}
