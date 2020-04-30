#ifndef KVADRAT_H
#define KVADRAT_H
#include<iostream>
using namespace std;
class Kvadrat{
public:
    Kvadrat(int);

    int area();
    int get_side();
    ~Kvadrat();
private:
    int a;
    int P;
};

Kvadrat::Kvadrat(int A){

    a = A;
    area();
}


int Kvadrat::get_side(){
    return a;
}
int Kvadrat::area(){
    P = a*a;

    return P;
}
Kvadrat::~Kvadrat(){

}

#endif // KVADRAT_H
