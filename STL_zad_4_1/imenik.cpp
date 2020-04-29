#include"imenik.h"
#include<iostream>
#include<cstring>
using namespace std;
Imenik::Imenik(string Ime,int br){



ime= Ime;
tel_broj = br;

}
string Imenik::get_Ime() const{
    return ime;
}


void Imenik::print() const{

    cout<<"Ime: "<<ime<<endl;
    cout<<"Broj: "<<tel_broj<<endl;
}

Imenik::Imenik(const Imenik &init){
  ime = init.ime;
    tel_broj = init.tel_broj;
}

Imenik::~Imenik(){

}
