//
// Created by dzirt on 11/3/2019.
//

#include "caesar_cipher.h"

//input method
void caesar_cipher::get_string(char **ptr, int length) {
    *ptr = new char[length];
    cout << "Enter your string: " << endl;
    cin.getline(*ptr, length);
    if( strlen(*ptr)==0){       //checking zero cString
        cout<<"Your input is zero.Try again"<<endl;
        get_string(&*ptr,length);
    }
}

//send each fragment of CString to encrypting method
void caesar_cipher::encrypt(char *pureString, int *key) {
    set_key(key, strlen(pureString));
 for (int i = 0; i < strlen(pureString); i++) {

        to_encrypt((pureString + i),(key+i));
    }
    cout << "Encrypted: " << pureString << endl;
}

//send each fragment of CString to decrypting method
void caesar_cipher::decrypt(char *dirtyString,const int*keyArray) {
    for (int i = 0; i < strlen(dirtyString); i++) {
        to_decrypt((dirtyString + i),(keyArray+i));
    }
    cout << "Decrypted: " << dirtyString << endl;
}

//encrypt the char and return in back
char *caesar_cipher::to_encrypt(char *a, const int *key) {
    int toAsciiCod;
    toAsciiCod = int(*a);//convert char to ASCII int equivalent
    toAsciiCod -= *key;//minus number for encrypting
    *a = static_cast<char>(toAsciiCod);
    return a;
}

char *caesar_cipher::to_decrypt(char *b,const int *key) {
    int fromAsciiCode;
    fromAsciiCode = int(*b);
    fromAsciiCode += *key;
    *b = static_cast<char>(fromAsciiCode);
    return b;
}

// fill the key array by random numbers
void caesar_cipher::set_key(int *keyPtr, int i) {
    srand(time(0));
    for (int j = 0; j < i; j++) {
        int f=(rand() % 26);
        *(keyPtr+j)= f;
    }
}


//print out array of keys
void caesar_cipher::get_key(const int*keys){
    cout<<"Array of keys contain: ";
    cout<<sizeof(keys)<<endl;
    for(int i=0;i<sizeof(keys);i++){
       if(i==(sizeof(keys)-1)){
           cout<<*(keys+i)<<" ; ";
       }else cout<<*(keys+i)<<" , ";
    }
}


/*void caesar_cipher::set_key(int **keyPtr, int i) {
 //   *keyPtr = new int[i];
 //   int *ptr=new int[i];
//    srand(time(0));
  //  for (int j = 0; j < i; j++) {
 //       cout<<j<<"/";
 //       int f=(rand() % 26);
 //       *(keyPtr+j)=& f;
//       cout<<*(keyPtr+j)<<"endl"<<endl;
//    }
}*/

