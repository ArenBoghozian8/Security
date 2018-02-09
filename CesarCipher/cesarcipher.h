#ifndef CESARCIPHER_H
#define CESARCIPHER_H
#include <iostream>
#include <cctype>

using namespace std;

class CesarCipher
{
private:
    string str;

public:
    CesarCipher();
    string encrypt(string str);
    string decrypt(string str);



};

#endif // CESARCIPHER_H
