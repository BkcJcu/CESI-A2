#pragma once
#include "pch.h"

using namespace std;

class Methode2 {
private:
	string key;
	string message;

public:
	Methode2();
	Methode2(string message, string key);
	
	string getMessage();
	void encryptXor();
};
