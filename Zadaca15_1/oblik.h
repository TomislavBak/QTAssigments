#ifndef OBLIK_H
#define OBLIK_H

#include<string>

using namespace std;

class Oblik{
public:

    virtual int get_Area() = 0;
    virtual int get_Volume() = 0;
    virtual void print() =0 ;
    virtual string get_Name() = 0;


};

#endif // OBLIK_H
