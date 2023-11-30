#pragma once
#include "pch.h"

using namespace std;

class Methode1 {
private:
	string text;
	int shift;
public:
	Methode1();
	Methode1(string, int);
	string getText();
	void encryptCesar();
	void decryptCesar();
};