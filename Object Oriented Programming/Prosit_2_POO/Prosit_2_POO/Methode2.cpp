#include "pch.h"
#include "Methode2.h"

using namespace std;

Methode2::Methode2() {
	this->key = "";
	this->message = "";
}

Methode2::Methode2(string message, string key) {
	this->message = message;
	this->key = key;
}

string Methode2::getMessage() {
	return this->message;
}

void Methode2::encryptXor() {
	string text = this->message;

	for (size_t i = 0; i < this->message.size(); ++i) {
		text[i] = text[i] ^ this->key[i % this->key.size()];
	}
	this->message = text;
}