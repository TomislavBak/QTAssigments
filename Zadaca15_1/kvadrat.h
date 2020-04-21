#ifndef KVADRAT_H
#define KVADRAT_H
#include"dvodimenz.h"
class Kvadrat : public DvoDimenzionalni{

public:
    Kvadrat(int);
    virtual int get_Area() ;
    virtual void print();
    virtual string get_Name();

    ~Kvadrat();
private:
    int a; // stranata na kvadratot
};

#endif // KVADRAT_H
