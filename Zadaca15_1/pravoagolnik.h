#ifndef PRAVOAGOLNIK_H
#define PRAVOAGOLNIK_H
#include"dvodimenz.h"

class Pravoagolnik : public DvoDimenzionalni{
public:
    Pravoagolnik(int,int);
    virtual int get_Area() ;
    virtual void print();
    virtual string get_Name();
    ~Pravoagolnik();
private:
    int a;
    int b;
};

#endif // PRAVOAGOLNIK_H
