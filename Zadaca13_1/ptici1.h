#ifndef PTICI1_H
#define PTICI1_H
#include"zivotno.h"
#include"datum1.h"
class Ptici:virtual public Zivotno{
public:
    Ptici(int,int,int,int,int,int,int,int,int,char*,char,char);
    //Ptici(const Ptici&);
    void prikazi_Podatoci()const;
    virtual Date presmetaj_Vakcinacija();
     static int get_Count();
     static int count;
    ~Ptici();

private:
char letac;
};

#endif // PTICI1_H
