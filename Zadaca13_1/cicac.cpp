#include<iostream>
#include"cicac.h"
#include"zivotno.h"
#include"datum1.h"
using namespace std;
int Cicaci::count=0;
Cicaci::Cicaci(int y_r,int m_r,int d_r,int y_z,int m_z,int d_z,int y_v,int m_v,int d_v,char*Ime,char Pol,char Prezivar):Zivotno(y_r,m_r,d_r,y_z,m_z,d_z,y_v,m_v,d_v,Ime,Pol){
    prezivar=Prezivar;
count = count + 2;
}

//Cicaci::Cicaci(const Cicaci &init):Zivotno(init.Datum_ragjanje.get_year(),init.Datum_ragjanje.get_month(),init.Datum_ragjanje.get_day(),init.Datum_zoo.get_year(),init.Datum_zoo.get_month(),init.Datum_zoo.get_day(),init.Datum_posledna_vakcina.get_year(),init.Datum_posledna_vakcina.get_month(),init.Datum_posledna_vakcina.get_day()){
  //  prezivar = init.prezivar;

//}


void Cicaci::prikazi_Podatoci() const{
Zivotno::prikazi_Podatoci();
cout<<"Prezivar:"<<prezivar<<endl;

}
Date Cicaci::presmetaj_Vakcinacija(){
int y,m,d;


y = Datum_posledna_vakcina.get_year() +1;
m = Datum_posledna_vakcina.get_month();
d = Datum_posledna_vakcina.get_day();

Date t(y,m,d);
return t;

}

int Cicaci::get_Count(){
    return count;
}

Cicaci::~Cicaci(){
count--;
}


