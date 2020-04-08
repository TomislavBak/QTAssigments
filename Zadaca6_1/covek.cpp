#include<iostream>
#include"covek.h"
#include<cstring>

using namespace std;

Covek::Covek(char *podatoci){ // konstruktor


    lice =new char[strlen(podatoci) + 1];
    strcpy(lice,podatoci);
    cout<<"Konstruktor za lice so podatoci\n"<<lice<<endl;


}

Covek::~Covek(){ delete [] lice;
               cout<<"Destruktor"<<endl;} // destruktor


void Covek::get_print() const{


    cout<< lice<<endl;;
}
