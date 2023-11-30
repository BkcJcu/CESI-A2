#pragma once

class Coordonnees {
private:
    int x;
    int y;
    int x2;
    int y2;
    float distance;
    void inix(int);
    void iniy(int);
    void inix2(int);
    void iniy2(int);

public:
    void setX(int);
    void setY(int);
    void setX2(int);
    void setY2(int);
    int getX(void) const;
    int getY(void) const;
    int getX2(void) const;
    int getY2(void) const;
    float getDistance(void) const;
    void calculDistance();


    Coordonnees();
    Coordonnees(int, int, int, int);
};

