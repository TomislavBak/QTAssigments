#ifndef KOSULI_H
#define KOSULI_H
#include"Artikl.h"
class Kosuli:public Artikl{
public:
    Kosuli(char *,char *,int,int,int,int);
    Kosuli(const Kosuli &);
    int get_Cena();
     bool get_Tip();
    ~Kosuli();
private:
    bool tip = false;
    int broj_koshuli = 0;



};

#endif // KOSULI_H
