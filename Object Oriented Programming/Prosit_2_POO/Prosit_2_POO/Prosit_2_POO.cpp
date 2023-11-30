#include <iostream>
#include <string>
#include "pch.h"
#include "Methode1.h"
#include "Methode2.h"


using namespace std;

int main() {

    int pause;

    Methode1 coucou("JE FAIS CACA PARTOUT", 3);
    Methode2 bonjour("JE FAIS CACA PARTOUT", "prout");


    cout << "Original Message : " << coucou.getText() << endl;
    coucou.encryptCesar();
    cout << "Encrypted Message with Monsieur Cesar: " << coucou.getText() << endl;
    coucou.decryptCesar();
    cout << "Decrypted Message with Monsieur Cesar: " << coucou.getText() << endl;
    bonjour.encryptXor();
    cout << "Encrypted Message with Monsieur Xor: " << bonjour.getMessage() << endl;
    bonjour.encryptXor();
    cout << "Dencrypted Message with Monsieur Xor: " << bonjour.getMessage() << endl;

    cin >> pause;

}