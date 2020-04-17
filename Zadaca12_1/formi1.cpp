#include<formi1.h>
#include<iostream>
#include"formi.h"
using namespace std;
int Kocka::counter = 0;

Kocka::Kocka(char *Ime,int n):TriD(Ime,n){
    Oblik::vnesi_Strana();
    TriD::set_Hight();
   cout<<"Ja vnesovte stranta a"<<endl;
   a = strani[0];
   counter++;
}

Kocka::Kocka(const Kocka &init):TriD(init.ime,init.broj_strani){
    a = init.a;
    counter ++;
}

void Kocka::print() const{
    TriD::print();
    cout<<"So strana a = "<<a<<endl;
}
int Kocka::get_Counter(){
    return counter;
}

Kocka::~Kocka(){
    counter--;
}


/*------------------------------------------------------------------------*/
int Kvadar::counter = 0;
Kvadar::Kvadar(char *Ime,int n):TriD(Ime,n){
    Oblik::vnesi_Strana();
    TriD::set_Hight();
    cout<<"Gi vnesovte strante a i b"<<endl;
    a = strani[0];
    b = strani[1];
    counter++;
}

Kvadar::Kvadar(const Kvadar &init):TriD(init.ime,init.broj_strani){
    a = init.a;
    b = init.b;
    counter++;
}

void Kvadar::print() const{
    TriD::print();
    cout<<"Stranata a = "<<a<<endl;
    cout<<"Stranta b = "<<b<<endl;
}
int Kvadar::get_Counter(){
    return counter;
}

Kvadar::~Kvadar(){
    counter--;
}
/*------------------------------------------------------------------------*/
int Piramida::counter = 0;
Piramida::Piramida(char *Ime,int n):TriD(Ime,n){
    Oblik::vnesi_Strana();
    TriD::set_Hight();
    cout<<"Gi vnesovte strante a i b"<<endl;
    a = strani[0];
    b = strani[1];
    c = strani[2];
    set_Base();

    counter++;
}

Piramida::Piramida(const Piramida &init):TriD(init.ime,init.broj_strani){
    a = init.a;
    b = init.b;
    c = init.c;
    base = init.base;
    counter++;
}

void Piramida::print() const{
    TriD::print();
    cout<<"Stranata a = "<<a<<endl;
    cout<<"Stranta b = "<<b<<endl;
    cout<<"Stranta c = "<<c<<endl;
    cout<<"Bazata = "<<base<<endl;
}
void Piramida::set_Base() {
    cout<<"Vnesete ja bazata"<<endl;
    cin>>base;
}
int Piramida::get_Counter(){
    return counter;
}

Piramida::~Piramida(){
    counter--;
}
