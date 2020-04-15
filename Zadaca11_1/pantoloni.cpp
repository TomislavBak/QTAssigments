#include<iostream>
#include<cstring>
#include"date1.h"
#include"Artikl.h"
#include"Artikl.h"
#include"pantoloni.h"
#include<cassert>

using namespace std;
Pantoloni::Pantoloni(char *ime_pant,char *golemina_pant,int cena_pant,int yr,int mn,int dy):Artikl(ime_pant,golemina_pant,cena_pant,yr,mn,dy){
broj_pantaloni++;
}

Pantoloni::Pantoloni(const Pantoloni &init):Artikl(init.ime,init.golemina,init.cena,init.donesen_vo_prodavnica.get_year(),init.donesen_vo_prodavnica.get_month(),init.donesen_vo_prodavnica.get_day()){
datum_na_sledna_nabavka = init.datum_na_sledna_nabavka;
broj_pantaloni++;
}

int Pantoloni::get_Cena(){
    return cena;
}

bool Pantoloni::get_Tip(){
    return tip;
}

Pantoloni::~Pantoloni(){
broj_pantaloni--;
}



