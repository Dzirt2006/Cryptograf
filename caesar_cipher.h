//
// Created by dzirt on 11/3/2019.
//

#ifndef CAESAR_CIPHER_CAESAR_CIPHER_H
#define CAESAR_CIPHER_CAESAR_CIPHER_H

#include <iomanip>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class caesar_cipher {
public:
    //Constructors
    caesar_cipher() {
        get_string(&stringForWork, STRING_LENGTH);
        encrypt(stringForWork,keyArr);
        decrypt(stringForWork,keyArr);
        get_key(keyArr);
    }

private:
    //Prototypes
    void get_string(char **, int);

    void encrypt(char *,int*);

    char *to_encrypt(char *,const int *);

    char *to_decrypt(char *,const int *);

    void decrypt(char *,const int *);

    void set_key(int*, int);

    void get_key(const int*);

    //Variables
    static const int STRING_LENGTH = 35;
    char *stringForWork = nullptr;
    int *keyArr=new int[STRING_LENGTH];
};


#endif //CAESAR_CIPHER_CAESAR_CIPHER_H
