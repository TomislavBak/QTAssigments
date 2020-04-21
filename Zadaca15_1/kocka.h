#ifndef KOCKA_H
#define KOCKA_H
#include"trodimenz.h"
class Kocka : public TriDimenzionalni{

public:
    Kocka(int);
    virtual int get_Area();
    virtual void print();
    virtual string get_Name();
     virtual int get_Volume();
    ~Kocka();
private:
    int a; // stranata na kvadratot
};

#endif // KOCKA_H
