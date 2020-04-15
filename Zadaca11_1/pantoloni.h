#ifndef PANTOLONI_H
#define PANTOLONI_H
#include"Artikl.h"
#include"date1.h"
class Pantoloni: public Artikl{
public:
    Pantoloni(char *,char *,int,int,int,int); // konstruktor
    Pantoloni(const Pantoloni&); // copy konstruktor

    ~Pantoloni(); // destruktor
    int get_Cena();
    bool get_Tip();
private:
   Date datum_na_sledna_nabavka = presmetaj_Nabavka(tip);
   bool tip = true; // oznachuva deka se raboti za pantoloni
   int broj_pantaloni=0;
};

#endif // PANTOLONI_H
