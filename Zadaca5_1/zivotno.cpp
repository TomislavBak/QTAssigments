#include<iostream>
#include"datum.h"
#include"zivotno.h"
#include<cstring>
using namespace std;


Zivotno::Zivotno(int b_m,int b_d, int b_y,int z_m,int z_d,
                 int z_y,char t,char p,char *name,int v_m, int v_d, int v_y):Datum_na_ragjanje(b_m,b_d,b_y),
                 Datum_na_donesuvanje_vo_zoo(z_m,z_d,z_y),Datum_na_posledna_vakcinacija(v_m,v_d,v_y){
    switch (t) {

    case 'c': tip = t;
        cout<<"Vnesen e cicach"<<endl;
        break;
    case 'v': tip = t;
        cout<<"Vnesen e vlekach"<<endl;
        break;
    case 'p': tip = t;
        cout<<"Vnesena e ptica"<<endl;
        break;
    default: cout<<"Vnesen e progreshen tip"<<endl;
                tip = '/';

    }

    switch (p) {
    case 'm': Pol = p;
        break;
    case 'f': Pol = p;
        break;
    default: cout<<"Vnesen e progreshen pol"<<endl;
        Pol = '/';

    }


    int length = strlen( name );
       length = ( length < 30 ? length : 29 );
       strncpy( Ime, name, length );
       Ime[ length ] = '\0';

}

void Zivotno::Prikazi_Podatoci() const{

    cout<<"Imeto: "<<Ime<<endl;
    cout<<"Tip: "<<tip<<endl;
    cout<<"Pol: "<<Pol<<endl;
    cout<<"Datum na raganje: "<<endl;
    Datum_na_ragjanje.print();
    cout<<"Datum na doagjanje vo zoo: "<<endl;
    Datum_na_donesuvanje_vo_zoo.print();

}

char Zivotno::Pronajdi_tip(){
    return tip;
}

Datum Zivotno::Presmetaj_vakcinacija(){
    int a,b,c;
    Datum dat;
    switch (tip) {

    case 'c':

           a=Datum_na_posledna_vakcinacija.get_mn();
           b=Datum_na_posledna_vakcinacija.get_dy();
           c=Datum_na_posledna_vakcinacija.get_yr() + 1;
        break;

    case 'v':
                if((Datum_na_posledna_vakcinacija.get_mn() + 8) > 12){

                    a=8-Datum_na_posledna_vakcinacija.get_mn();
                    b=Datum_na_posledna_vakcinacija.get_dy();
                    c=Datum_na_posledna_vakcinacija.get_yr() + 1;
                }
                else{

                    a=Datum_na_posledna_vakcinacija.get_mn() +8;
                    b=Datum_na_posledna_vakcinacija.get_dy();
                    c=Datum_na_posledna_vakcinacija.get_yr();
                }
        break;

    case 'p':  if((Datum_na_posledna_vakcinacija.get_mn() + 6) > 12){

            a=6-Datum_na_posledna_vakcinacija.get_mn();
            b=Datum_na_posledna_vakcinacija.get_dy();
            c=Datum_na_posledna_vakcinacija.get_yr() + 1;
        }
        else{

            a=Datum_na_posledna_vakcinacija.get_mn() +6;
            b=Datum_na_posledna_vakcinacija.get_dy();
            c=Datum_na_posledna_vakcinacija.get_yr();
        }
        break;

    }
    dat.set_dat(a,b,c);
return dat;
}
