#include<iostream>
#include<string>
#include"pravoagolnik.h"

using namespace std;


Pravoagolnik::Pravoagolnik(int A,int B){
    a = (A<0 ? 0 : A);
    b = (B<0 ? 0 : B);
}


string Pravoagolnik::get_Name(){
    return "Pravoagolnik";
}

int Pravoagolnik::get_Area(){
    return a*b;
}


void Pravoagolnik::print() {
cout<<"Tip: "<<DvoDimenzionalni::get_Tip()<<endl;
cout<<"Ime: "<<get_Name()<<endl;
cout<<"Ploshtina: "<<get_Area()<<endl;
cout<<"Strana a = "<<a<<endl;
cout<<"Strana b = "<<b<<endl;

}

Pravoagolnik::~Pravoagolnik(){

}
