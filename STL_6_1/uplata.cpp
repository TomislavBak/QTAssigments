#include<iostream>
#include<cstring>
#include"uplata.h"
#include<string>
#include<iterator>
#include"datum1.h"
#include<map>
using namespace std;


Uplata::Uplata(string Ime,string Prezime,string PW){
  ime = Ime;
  prezime = Prezime;
  password = PW;
}

void Uplata::nova_Uplata(int Suma, int year,int month ,int day){
Datum datum_Uplata(day,month,year);

uplata.insert(mmid::value_type(Suma,datum_Uplata));
}

string Uplata::get_pw() const{
    return password;
}

void Uplata::print() {
mmid::const_iterator it;
cout<<"Ime: "<<ime<<endl;
cout<<"Prezime: "<<prezime<<endl;
for(it = uplata.begin();it!=uplata.end();it++){
    it->second.print();
    cout<<it->first<<endl;
}}

Uplata::~Uplata(){

}

