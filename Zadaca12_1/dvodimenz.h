#ifndef DVODIMENZ_H
#define DVODIMENZ_H
#include"oblik.h"


class DvaD:public Oblik{

public:

    DvaD(char *,int);
    DvaD(const DvaD &);
    void print()const;

    ~DvaD();
private:

    char tip[3]="2D";




};



#endif // DVODIMENZ_H
