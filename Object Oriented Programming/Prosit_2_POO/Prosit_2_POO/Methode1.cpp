#include "pch.h"
#include "Methode1.h"

using namespace std;

Methode1::Methode1() {
	this->text = "";
	this->shift = 0;
}

Methode1::Methode1(string text, int shift) {
	this->text = text;
	this->shift = shift;
}

string Methode1::getText() {
	return this->text;
}


void Methode1::encryptCesar() {
    string message = "";
	for (char character : this->text) {
        if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
            char base = (character >= 'A' && character <= 'Z') ? 'A' : 'a';
            message += static_cast<char>((character - base + this->shift + 26) % 26 + base);
        }
        else {
            message += character;
        }
    }
    this->text = message;
}

void Methode1::decryptCesar() {
    string message = "";
    for (char character : this->text) {
        if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
            char base = (character >= 'A' && character <= 'Z') ? 'A' : 'a';
            message += static_cast<char>((character - base + (-this->shift) + 26) % 26 + base);
        }
        else {
            message += character;
        }
    }
    this->text = message;
}
    