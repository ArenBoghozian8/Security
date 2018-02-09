#include <iostream>
#include <cesarcipher.h>

using namespace std;

int main()
{
    CesarCipher code;;
    string str;
    int choice;

    while(1){
        cout<<"For Encryption press 1, For decryption press 2: "<<endl;
        cin>>choice;

        if(choice < 1 || choice > 2){
            cout<<"Wrong Choice, Try again"<<endl;
            continue;
        }

        cout<<"Please enter you sentence"<<endl;
        cin.ignore();
        getline(std::cin,str);

        if(choice == 1)
            cout << code.encrypt(str) << endl;
        else
            cout << code.decrypt(str) << endl;

        break;
    }

    return 0;
}
