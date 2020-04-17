#ifndef FORMI_H
#define FORMI_H
#include"dvodimenz.h"

class Kvadrat:public DvaD{

public:
    Kvadrat(char *,int );
    Kvadrat(const Kvadrat&);
    void print()const;
    static int counter;
    static int get_Count();
    ~Kvadrat();

private:
    int a;


};
/*------------------------------------------------------------------------*/
class Pravoagolnik:public DvaD{
public:
    Pravoagolnik(char *,int );
    Pravoagolnik(const Pravoagolnik&);
    void print()const;
    static int counter;
    static int get_Count();
    ~Pravoagolnik();
private:
    int a,b;
};
/*------------------------------------------------------------------------*/
class Triagolnik:public DvaD{
public:
    Triagolnik(char *,int );
    Triagolnik(const Triagolnik&);
    void print()const;
    static int counter;
   static int get_Count();
    ~Triagolnik();
private:
    int a,b,c;
};
/*------------------------------------------------------------------------*/
class Trapez:public DvaD{
public:
    Trapez(char *,int );
    Trapez(const Trapez&);
    void print()const;
    static int counter;
   static int get_Count();
    ~Trapez();
private:
    int a,b,c,d;
};



#endif // FORMI_H
