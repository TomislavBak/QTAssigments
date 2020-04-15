#include<iostream>
#include<cstring>
#include"date1.h"
#include"Artikl.h"
#include<cassert>

using namespace std;

Artikl::Artikl(char *Ime_proizvod,char *Golemina,int Cena,int y,int m,int d):donesen_vo_prodavnica(y,m,d){

    ime = new char[strlen(Ime_proizvod) + 1]; // postavuvanje na imeto na proizvodot
    assert(ime !=0);
    strcpy(ime,Ime_proizvod);

    golemina = new char[strlen(Golemina) + 1]; // postavuvanje na golemina
    assert(golemina !=0);
    strcpy(golemina,Golemina);

    cena = Cena;                               // postavuvanje na cena


}


Artikl::Artikl(const Artikl &init):donesen_vo_prodavnica(init.donesen_vo_prodavnica.get_year(),init.donesen_vo_prodavnica.get_month(),init.donesen_vo_prodavnica.get_day()){

    strcpy(ime,init.ime);
    strcpy(golemina,init.golemina);
    cena = init.cena;

}

void Artikl::prikazi_Artikl() const{ // pecatenje
    cout<<"Ime na artikl: "<<ime<<endl;
    cout<<"Golemina: "<<golemina<<endl;
    cout<<"Cena: "<<cena<<endl;
    cout<<"Donesen vo prodavnica"<<endl;
    donesen_vo_prodavnica.print_Date();
    cout<<endl;
}

Date Artikl::presmetaj_Nabavka(bool Tip) {
  int yr,mn,dy;
  if(Tip == true){
 if(donesen_vo_prodavnica.get_month()==12){
     yr = donesen_vo_prodavnica.get_year() + 1;
     mn = 1;
     dy = donesen_vo_prodavnica.get_day();
 }
 else{
     yr = donesen_vo_prodavnica.get_year();
     mn = donesen_vo_prodavnica.get_month() +1;
     dy = donesen_vo_prodavnica.get_day();
 }}

  else {cout<<"Proveri zaliha na koshuli"<<endl;

  yr = 0;mn=0;dy=0;}

  Date t(yr,mn,dy);

   return t;


}

Date Artikl::get_donesen() const{
    return donesen_vo_prodavnica;
}

Artikl::~Artikl(){ // osloboduvanje na memorija
    delete [] ime;
    delete [] golemina;
}




