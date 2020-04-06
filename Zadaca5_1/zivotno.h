#ifndef ZIVOTNO_H
#define ZIVOTNO_H
#include "datum.h"
class Zivotno{

public:
    Zivotno(int,int,int,int,int,int,char,char,char *,int,int,int);
    void Prikazi_Podatoci() const;
    Datum Presmetaj_vakcinacija();
    char Pronajdi_tip();


private:
    Datum Datum_na_ragjanje;
    Datum Datum_na_donesuvanje_vo_zoo;
    char tip;
    char Pol;
    char Ime[30];
    Datum Datum_na_posledna_vakcinacija;

};

#endif // ZIVOTNO_H
