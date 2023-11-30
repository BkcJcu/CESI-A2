#include <stdio.h>
#include "pch.h"
#include <math.h>
#include "coordonnees.h"

using namespace std;
using namespace System;


Coordonnees::Coordonnees(void) {
    this->inix(0);
    this->iniy(0);
    this->inix2(0);
    this->iniy2(0);
}

Coordonnees::Coordonnees(int x, int y, int x2, int y2) {
    this->inix(x);
    this->iniy(y);
    this->inix2(x2);
    this->iniy2(y2);
}

void Coordonnees::inix(int n) {
    this->setX(n);
}

void Coordonnees::iniy(int n) {
    this->setY(n);
}

void Coordonnees::inix2(int n) {
    this->setX2(n);
}

void Coordonnees::iniy2(int n) {
    this->setY2(n);
}


void Coordonnees::setX(int n) {
    this->x = n;
}

void Coordonnees::setY(int n) {
    this->y = n;
}

void Coordonnees::setX2(int n) {
    this->x2 = n;
}

void Coordonnees::setY2(int n) {
    this->y2 = n;
}



void Coordonnees::calculDistance() {
    this->distance = sqrt(pow(this->x2 - this->x, 2) + pow(this->y2 - this->y, 2));
}


int Coordonnees::getX(void) const {
    return this->x;
}

int Coordonnees::getY(void) const {
    return this->y;
}

int Coordonnees::getX2(void) const {
    return this->x2;
}

int Coordonnees::getY2(void) const {
    return this->y2;
}


float Coordonnees::getDistance(void) const {
    return this->distance;
}