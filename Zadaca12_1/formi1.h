#ifndef FORMI1_H
#define FORMI1_H
#include"tridimenz.h"


class Kocka:public TriD{
public:
    Kocka(char *,int );
    Kocka(const Kocka&);
    void print()const;
    int get_Counter();
    static int counter;
    ~Kocka();
private:
    int a;

};

class Kvadar:public TriD{
public:
    Kvadar(char *,int );
    Kvadar(const Kvadar&);
    void print()const;
    int get_Counter();
    static int counter;
    ~Kvadar();

private:
    int a,b;
};

class Piramida:public TriD{
public:
    Piramida(char *,int);
    Piramida(const Piramida&);
    void print()const;
    int get_Counter();
    void set_Base();
    static int counter;
    ~Piramida();

private:
    int a,b,c;
    int base;
};

#endif // FORMI1_H
