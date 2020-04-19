#ifndef CICAC_H
#define CICAC_H
#include"zivotno.h"
#include"datum1.h"
class Cicaci: virtual public Zivotno{
public:
   Cicaci(int,int,int,int,int,int,int,int,int,char*,char,char);
   //Cicaci(const Cicaci&);
    void prikazi_Podatoci()const;
    virtual Date presmetaj_Vakcinacija();
    static int get_Count();
    static int count;
    ~Cicaci();

private:
char prezivar;
};
#endif // CICAC_H
