#include<iostream>
#include<cstring>
#include"zivotno.h"
#include"datum1.h"
using namespace std;


Zivotno::Zivotno(int y_r,int m_r,int d_r,int y_z,int m_z,int d_z,int y_v,int m_v,int d_v,char *Ime,char Pol): Datum_ragjanje(y_r,m_r,d_r),Datum_zoo(y_z,m_z,d_z),Datum_posledna_vakcina(y_v,m_v,d_v){
ime = new char[strlen(Ime)+1];
strcpy(ime,Ime);

pol = Pol;

}
/*----------------------------------------------------------------------------*/
Zivotno::Zivotno(const Zivotno &init):Datum_ragjanje(init.Datum_ragjanje.get_year(),init.Datum_ragjanje.get_month(),init.Datum_ragjanje.get_day()),Datum_zoo(init.Datum_zoo.get_year(),init.Datum_zoo.get_month(),init.Datum_zoo.get_day()),Datum_posledna_vakcina(init.Datum_posledna_vakcina.get_year(),init.Datum_posledna_vakcina.get_month(),init.Datum_posledna_vakcina.get_day()){

ime = new char[strlen(init.ime)+1];

strcpy(ime,init.ime);
pol = init.pol;

cout<<"kopiram zivotno"<<endl;
}
/*----------------------------------------------------------------------------*/




void Zivotno::prikazi_Podatoci() const{
cout<<"Ime: "<<ime<<endl;
cout<<"Pol: "<<pol<<endl;

cout<<"Datum na ragjanje:";
Datum_ragjanje.print_Date();
cout<<endl;

cout<<"Datum na donesuvanje vo zoo:";
Datum_zoo.print_Date();
cout<<endl;

cout<<"Datum na posledna vakcina:";
Datum_posledna_vakcina.print_Date();
cout<<endl;

}

/*----------------------------------------------------------------------------*/

Zivotno::~Zivotno(){
    cout<<"Brisham zivotno"<<endl;
    delete [] ime;
}

