#include<iostream>
#include<cstring>
#include"oblik.h"
#include<cassert>
using namespace std;


Oblik::Oblik(char *Ime,int broj){ // konstruktor

    ime = new char[strlen(Ime) +1];
    assert(ime !=0);
    strcpy(ime,Ime);



    broj_strani = broj;




}

void Oblik::vnesi_Strana(){

    strani = new int[broj_strani];
    cout<<"Vnesi gi dolzinite na site strani oddelno"<<endl;// vnesuvanje na dolzinite na stranite
    for(int i = 0;i<broj_strani;i++){
        cin>>strani[i];
    }

}

Oblik::Oblik(const Oblik &init){ // copy konstruktor

    strcpy(ime,init.ime);

    broj_strani = init.broj_strani;
    for(int i = 0;i<broj_strani;i++){

        strani[i] = init.strani[i];
    }
}

void Oblik::print() const{
cout<<"Ime na figurata: "<<ime<<endl;

}

Oblik::~Oblik(){ // destruktor
    cout<<"Brishenje"<<endl;
    delete [] ime;

    delete [] strani;
}


