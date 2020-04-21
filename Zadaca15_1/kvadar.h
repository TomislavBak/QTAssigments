#ifndef KVADAR_H
#define KVADAR_H
#include<string>
#include"trodimenz.h"
using namespace std;
class Kvadar : public TriDimenzionalni{
public:
    Kvadar(int,int,int);
    virtual int get_Area() ;
    virtual int get_Volume();
    virtual void print();
    virtual string get_Name();
    ~Kvadar();
private:
    int a;
    int b;
    int c;
};
#endif // KVADAR_H
