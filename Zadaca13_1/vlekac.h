#ifndef VLEKAC_H
#define VLEKAC_H
#include"zivotno.h"
#include"datum1.h"
class Vlekac:virtual public Zivotno{

public:
    Vlekac(int,int,int,int,int,int,int,int,int,int,int,int,char*,char);
    void prikazi_Podatoci()const;
    virtual Date presmetaj_Vakcinacija();
    static int get_Count();
    ~Vlekac();
    static int count;
private:
    Date Datum_sledna_vakcina;

};

#endif // VLEKAC_H
