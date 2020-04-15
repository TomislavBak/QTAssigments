#include<iostream>
#include<cstring>
#include"date1.h"
#include"Artikl.h"
#include"kosuli.h"
#include<cassert>

using namespace std;

Kosuli::Kosuli(char *ime_kos,char *golemina_kos,int cena_kos,int yr,int mn,int dy):Artikl(ime_kos,golemina_kos,cena_kos,yr,mn,dy){
broj_koshuli++;
}

Kosuli::Kosuli(const Kosuli &init):Artikl(init.ime,init.golemina,init.cena,init.donesen_vo_prodavnica.get_year(),init.donesen_vo_prodavnica.get_month(),init.donesen_vo_prodavnica.get_day()){
broj_koshuli++;
}

int Kosuli::get_Cena(){
return cena;}

bool Kosuli::get_Tip(){
    return tip;}

 Kosuli::~Kosuli(){
    broj_koshuli--;
}

