//
// Created by dzirt on 11/3/2019.
//

#include "caesar_cipher.h"


void caesar_cipher::get_string(char **ptr, int length) { //with '**' we can initialize a pointer
    *ptr = new char[length];
    cout << "Enter your string: " << endl;
    cin.getline(*ptr, length);
}

void caesar_cipher::encrypt(char *PURE_STRING) {
    srand(time(0));
    for (int i = 0; i < strlen(PURE_STRING); i++) {
        to_encrypt((PURE_STRING + i));
    }
    cout << "Encrypted: " << PURE_STRING << endl;
}

void caesar_cipher::deencrypt(char *DIRTY_STRING) {
    srand(time(0));
    for (int i = 0; i < strlen(DIRTY_STRING); i++) {
        to_decrypt((DIRTY_STRING + i));
    }
    cout << "Decrypted: " << DIRTY_STRING << endl;
}


char *caesar_cipher::to_encrypt(char *a) {
    int TO_ASCII_COD;
    TO_ASCII_COD = int(*a);//convert char to ASCII int equivalent
    TO_ASCII_COD -= 1;//minus number for encrypting
    *a = static_cast<char>(TO_ASCII_COD);
    return a;
}

char *caesar_cipher::to_decrypt(char *b) {
    int FROM_ASCII_CODE;
    FROM_ASCII_CODE = int(*b);
    FROM_ASCII_CODE += 1;
    *b = static_cast<char>(FROM_ASCII_CODE);
    return b;
}