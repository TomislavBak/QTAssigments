#ifndef ZIVOTNO_H
#define ZIVOTNO_H
#include"datum1.h"
class Zivotno{

public:
    Zivotno(int,int,int,int,int,int,int,int,int,char *,char); // konstruktor
    Zivotno(const Zivotno&);
    void prikazi_Podatoci()const; //pecatenje na podatoci
    //void set_Ime();
   // void set_Pol();
    ~Zivotno(); // destruktor
    virtual Date presmetaj_Vakcinacija()=0;// cisto virtuelna funkcija
protected:
    char *ime;
    char pol;
    Date Datum_ragjanje;
    Date Datum_zoo;
    Date Datum_posledna_vakcina;



};

#endif // ZIVOTNO_H
