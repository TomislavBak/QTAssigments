#include<iostream>
#include<cstring>
#include"zivotno.h"
#include"datum1.h"
#include"vlekac.h"
using namespace std;
int Vlekac::count = 0;
Vlekac::Vlekac(int y_r,int m_r,int d_r,int y_z,int m_z,int d_z,int y_v,int m_v,int d_v,int y_s,int m_s,int d_s,char*Ime,char Pol):Zivotno(y_r,m_r,d_r,y_z,m_z,d_z,y_v,m_v,d_v,Ime,Pol),Datum_sledna_vakcina(y_s,m_s,d_s){
count = count + 2;
}

void Vlekac::prikazi_Podatoci() const{
    Zivotno::prikazi_Podatoci();
    cout<<"Datum na naredna vakcinacija: ";
    Datum_sledna_vakcina.print_Date();
    cout<<endl;
}

Date Vlekac::presmetaj_Vakcinacija(){

return Datum_sledna_vakcina;
}

int Vlekac::get_Count(){
    return count;
}
Vlekac::~Vlekac(){
count--;
}
