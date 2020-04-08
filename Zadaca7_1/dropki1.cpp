#include <iostream>
#include "dropki1.h"
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
void Dropki::reduce(){
    int simp;
    simp = (x < y) ? x:y;  // odreduvame koj od dvata cifri e pomal za do go prnajdime nivniot zaednicki delitel

    for(int i = simp/2;i>1;i--){ // redukcija dokolku e vozmozna
        if(x%i == 0 && y%i == 0){// dokolku se pronajdi zaednicki delitel dvata broevise delat so nego
            x = x/i;
            y = y/i;
        }
    }

}


Dropki Dropki::operator+(Dropki &ob1){
    Dropki t(1,1);

    if(y == ob1.y){
    t.x = x + ob1.x;
    t.y = y;}
    else{
        t.x = x*ob1.y + y*ob1.x;
        t.y = y * ob1.y;
    }

    t.reduce();
    return t;
}

Dropki Dropki::operator-(Dropki &ob1){
    Dropki t(1,1);

    if(y == ob1.y){
    t.x = x - ob1.x;
    t.y = y;}
    else{
        t.x = x*ob1.y - y*ob1.x;
        t.y = y * ob1.y;
    }
    t.reduce();

    return t;

}

Dropki Dropki::operator*(Dropki &ob1){
    Dropki t(1,1);

t.x = x * ob1.x;
t.y = y * ob1.y;
t.reduce();
return t;
}

Dropki Dropki::operator/(Dropki &ob1){
    Dropki t(1,1);
t.x = x * ob1.y;
t.y = y * ob1.x;
t.reduce();
return t;
}




void Dropki::print_Dropki(){
    cout<<x<<"/"<<y<<endl;
}

void Dropki::print_Real(){
    float a;
    a = (float) x/ (float) y;
    cout<<a<<endl;
}
