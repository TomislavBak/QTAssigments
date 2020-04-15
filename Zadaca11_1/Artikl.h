#ifndef ARTIKL_H
#define ARTIKL_H
#include"date1.h"
class Artikl{
public:
   Artikl(char *,char *,int,int,int,int); // konstruktor
   Artikl(const Artikl &); // copy konstruktor
   void prikazi_Artikl()const;
   Date presmetaj_Nabavka(bool);
   Date get_donesen()const;
   ~Artikl(); // destruktor

protected:
   char *ime;
   char *golemina;
   int cena;
   Date donesen_vo_prodavnica;

};

#endif // ARTIKL_H
