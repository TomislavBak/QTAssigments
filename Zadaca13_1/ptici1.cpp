#include<iostream>
#include"ptici1.h"
#include"zivotno.h"
#include"datum1.h"
using namespace std;
int Ptici::count = 0;
Ptici::Ptici(int y_r,int m_r,int d_r,int y_z,int m_z,int d_z,int y_v,int m_v,int d_v,char*Ime,char Pol,char Letac):Zivotno(y_r,m_r,d_r,y_z,m_z,d_z,y_v,m_v,d_v,Ime,Pol){
    letac=Letac;

    count = count + 2;
}

//Ptici::Ptici(const Ptici &init):Zivotno(init.Datum_ragjanje.get_year(),init.Datum_ragjanje.get_month(),init.Datum_ragjanje.get_day(),init.Datum_zoo.get_year(),init.Datum_zoo.get_month(),init.Datum_zoo.get_day(),init.Datum_posledna_vakcina.get_year(),init.Datum_posledna_vakcina.get_month(),init.Datum_posledna_vakcina.get_day()){
//letac = init.letac;
//}


void Ptici::prikazi_Podatoci() const{
Zivotno::prikazi_Podatoci();
cout<<"Letac:"<<letac<<endl;

}
Date Ptici::presmetaj_Vakcinacija(){
int y,m,d;

if(Datum_posledna_vakcina.get_month()>6){
y = Datum_posledna_vakcina.get_year() +1;
m = Datum_posledna_vakcina.get_month()-6;
d = Datum_posledna_vakcina.get_day();
}
else{
    y = Datum_posledna_vakcina.get_year();
    m = Datum_posledna_vakcina.get_month();
    d = Datum_posledna_vakcina.get_day();
}
Date t(y,m,d);
return t;

}

int Ptici::get_Count(){
    return count;
}

Ptici::~Ptici(){
    cout<<"Brisham ptica"<<endl;
count--;
}


