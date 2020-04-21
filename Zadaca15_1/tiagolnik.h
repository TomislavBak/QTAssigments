#ifndef TIAGOLNIK_H
#define TIAGOLNIK_H
#include"dvodimenz.h"
class Triagolnik : public DvoDimenzionalni{

public:
    Triagolnik(int,int,int,int);
    virtual int get_Area() ;
    virtual void print();
    virtual string get_Name();
    ~Triagolnik();
private:
    int a;
    int b;
    int c;
    int h;

};

#endif // TIAGOLNIK_H
