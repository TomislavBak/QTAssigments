#include<iostream>
#include"covek.h"
#include"stedac.h"

int Stedac::brojStedaci = 0;
float Stedac::kamata = 0.3;

Stedac::Stedac(char *podat,int sostojba):covek(podat){

   /* ime = new char[strlen(Ime) + 1];
    prezime = new char[strlen(Prezime) + 1];
    adresa = new char[strlen(Adresa) + 1];
    broj = new char[strlen(Broj) + 1];
    */


    bilans = sostojba;
    brojStedaci++;
}


int Stedac::get_brojStedaci(){


return brojStedaci;
}

void Stedac::novKredit(int kr){

kredit = kr;
}

float Stedac::presmetaj_Kamata(){
    float l;


    l = kredit + (kamata/100)*kredit;

    return l;
}

void Stedac::print() const{


covek.get_print();

}



