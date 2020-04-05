#include <iostream>
#include "dropki.h"
using namespace std;


Dropki::Dropki(int i,int j){ // konstruktorza da nemame nuli

    x = (i > 0) ? i : 1;
    y = (j > 0) ? j : 1;
}

int Dropki::get_x(){ return x;}

int Dropki::get_y(){ return y;}

void Dropki::set_Dropki(int a, int b){
    x = a;
    y = b;
}



Dropki Dropki::add_Dropki(Dropki a, Dropki b, Dropki rez){

int a1,b1,simp;
if(a.get_y()==b.get_y()){
    a1 = a.get_x() + b.get_x();
    b1 = a.get_y();
}
else{
    a1 = (a.get_x() * b.get_y()) + (b.get_x() * a.get_y());
    b1 = a.get_y() * b.get_y();
}

simp = (a1 < b1) ? a1:b1;  // odreduvame koj od dvata cifri e pomal za do go prnajdime nivniot zaednicki delitel

for(int i = simp/2;i>1;i--){ // redukcija dokolku e vozmozna
    if(a1%i == 0 && b1%i == 0){// dokolku se pronajdi zaednicki delitel dvata broevise delat so nego
        a1 = a1/i;
        b1 = b1/i;
    }
}

rez.set_Dropki(a1,b1);

return rez;
}

Dropki Dropki::sub_Dropki(Dropki a, Dropki b, Dropki rez){

    int a1,b1,simp;
    if(a.get_y()==b.get_y()){
        a1 = a.get_x() - b.get_x();
        b1 = a.get_y();
    }
    else{
        a1 = (a.get_x() * b.get_y()) - (b.get_x() * a.get_y());
        b1 = a.get_y() * b.get_y();
    }

    simp = (a1 < b1) ? a1:b1;  // odreduvame koj od dvata cifri e pomal za do go prnajdime nivniot zaednicki delitel

    for(int i = simp/2;i>1;i--){ // redukcija dokolku e vozmozna
        if(a1%i == 0 && b1%i == 0){// dokolku se pronajdi zaednicki delitel dvata broevise delat so nego
            a1 = a1/i;
            b1 = b1/i;
        }
    }

    rez.set_Dropki(a1,b1);

    return rez;
}

Dropki Dropki::div_Dropki(Dropki a, Dropki b, Dropki rez){
    int a1,b1,simp;

    a1 = a.get_x() * b.get_y();
    b1 = a.get_y() * b.get_x();

    simp = (a1 < b1) ? a1:b1;  // odreduvame koj od dvata cifri e pomal za do go prnajdime nivniot zaednicki delitel

    for(int i = simp/2;i>1;i--){ // redukcija dokolku e vozmozna
        if(a1%i == 0 && b1%i == 0){// dokolku se pronajdi zaednicki delitel dvata broevise delat so nego
            a1 = a1/i;
            b1 = b1/i;
        }
    }

    rez.set_Dropki(a1,b1);


    return rez;
}

Dropki Dropki::mul_Dropki(Dropki a, Dropki b, Dropki rez){
    int a1,b1,simp;

    a1 = a.get_x() * b.get_x();
    b1 = a.get_y() * b.get_y();

    simp = (a1 < b1) ? a1:b1;  // odreduvame koj od dvata cifri e pomal za do go prnajdime nivniot zaednicki delitel

    for(int i = simp/2;i>1;i--){ // redukcija dokolku e vozmozna
        if(a1%i == 0 && b1%i == 0){// dokolku se pronajdi zaednicki delitel dvata broevise delat so nego
            a1 = a1/i;
            b1 = b1/i;
        }
    }

    rez.set_Dropki(a1,b1);

    return rez;
}

void Dropki::print_Dropki(){
    cout<<x<<"/"<<y<<endl;
}

void Dropki::print_Real(){
    float a;
    a = (float) x/ (float) y;
    cout<<a<<endl;
}






