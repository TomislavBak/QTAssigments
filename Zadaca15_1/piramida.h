#ifndef PIRAMIDA_H
#define PIRAMIDA_H
#include"trodimenz.h"
class Piramida : public TriDimenzionalni{

public:
    Piramida(int,int,int,int);
    virtual int get_Area() ;
     virtual int get_Volume() ;
    virtual void print();
    virtual string get_Name();
    ~Piramida();
private:
    int a;
    int b;

    int h;
    int H;

};
#endif // PIRAMIDA_H
