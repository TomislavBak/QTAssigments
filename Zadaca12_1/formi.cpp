#include<iostream>
#include"dvodimenz.h"
#include"formi.h"
#include<cstring>
using namespace std;
int Kvadrat::counter=0;

Kvadrat::Kvadrat(char *Ime,int n):DvaD(Ime,n){
 Oblik::vnesi_Strana();
cout<<"Ja vnesovte stranta a"<<endl;
a = strani[0];
counter++;
}
Kvadrat::Kvadrat(const Kvadrat &init):DvaD(init.ime,init.broj_strani){
a = init.a;
counter++;
}

void Kvadrat::print() const{

DvaD::print();
cout<<"So strana a = "<<a<<endl;
}

int Kvadrat::get_Count(){
    return counter;
}

Kvadrat::~Kvadrat(){
    --counter;

}
/*------------------------------------------------------------------------*/
int Pravoagolnik::counter=0;
Pravoagolnik::Pravoagolnik(char *Ime,int n):DvaD(Ime,n){
cout<<"Gi vnesovte strante a i b"<<endl;
a = strani[0];
b = strani[1];
counter++;
}

Pravoagolnik::Pravoagolnik(const Pravoagolnik &init):DvaD(init.ime,init.broj_strani){
a = init.a;
b = init.b;
counter++;
}

void Pravoagolnik::print() const{
DvaD::print();
cout<<"Stranata a = "<<a<<endl;
cout<<"Stranta b = "<<b<<endl;

}
int Pravoagolnik::get_Count(){
    return counter;
}

Pravoagolnik::~Pravoagolnik(){
counter--;
}

/*------------------------------------------------------------------------*/
int Triagolnik::counter=0;
Triagolnik::Triagolnik(char *Ime,int n):DvaD(Ime,n){
cout<<"Gi vnesovte strante a, b, c"<<endl;
a = strani[0];
b = strani[1];
c = strani[2];
counter++;
}

Triagolnik::Triagolnik(const Triagolnik &init):DvaD(init.ime,init.broj_strani){
a = init.a;
b = init.b;
c = init.c;
counter++;
}

void Triagolnik::print() const{
DvaD::print();
cout<<"Stranata a = "<<a<<endl;
cout<<"Stranta b = "<<b<<endl;
cout<<"Stranta c = "<<c<<endl;
}
int Triagolnik::get_Count(){
    return counter;
}


Triagolnik::~Triagolnik(){
counter--;
}

/*------------------------------------------------------------------------*/
int Trapez::counter=0;
Trapez::Trapez(char *Ime,int n):DvaD(Ime,n){
    cout<<"Gi vnesovte strante a, b, c, d"<<endl;
    a = strani[0];
    b = strani[1];
    c = strani[2];
    d = strani[3];
    counter++;
}

Trapez::Trapez(const Trapez &init):DvaD(init.ime,init.broj_strani){
a = init.a;
b = init.b;
c = init.c;
d = init.d;
counter++;
}

void Trapez::print() const{
    DvaD::print();
    cout<<"Stranata a = "<<a<<endl;
    cout<<"Stranta b = "<<b<<endl;
    cout<<"Stranta c = "<<b<<endl;
    cout<<"Stranta d = "<<d<<endl;

}


int Trapez::get_Count(){
    return counter;
}
Trapez::~Trapez(){
    counter--;
}




