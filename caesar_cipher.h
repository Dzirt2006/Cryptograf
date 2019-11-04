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
        get_string(&STRING_FOR_WORK, STRING_LENGTH);
        encrypt(STRING_FOR_WORK);
        deencrypt(STRING_FOR_WORK);
    }

    //Prototypes
    void get_string(char **, int);
    void encrypt(char *);
    char *to_encrypt(char*);
    char *to_decrypt(char*);
    void deencrypt(char*);
    //Variables
    const int STRING_LENGTH = 35;
    char *STRING_FOR_WORK = nullptr;
    char *ENCRYPTED = nullptr;
};


#endif //CAESAR_CIPHER_CAESAR_CIPHER_H
