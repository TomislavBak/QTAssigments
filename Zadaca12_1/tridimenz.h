#ifndef TRIDIMENZ_H
#define TRIDIMENZ_H
#include"oblik.h"


class TriD:public Oblik{
public:

    TriD(char *,int);
    TriD(const TriD &);
    void print()const;
    void set_Hight();

    ~TriD();
private:

    char tip[3]="3D";
    int h = 0; // visina na objektite

};

#endif // TRIDIMENZ_H
