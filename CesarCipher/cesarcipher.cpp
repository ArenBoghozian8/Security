#include "cesarcipher.h"

CesarCipher::CesarCipher()
{


}

string CesarCipher::encrypt(string str)
{
    for(int i=0; i<str.size(); i++){
        str[i] = tolower(str[i]);
        if(str[i] != ' ')
            str[i] += 3;
        if(str[i] > 122)
            str[i] -= 26;
    }

    return str;
}


string CesarCipher::decrypt(string str)
{

    for(int i=0; i<str.size(); i++){
        str[i] = tolower(str[i]);
        if(str[i] != ' ')
            str[i] -= 3;
        if(str[i] < 97 && str[i] != ' ')
            str[i] += 26;
    }

    return str;
}
