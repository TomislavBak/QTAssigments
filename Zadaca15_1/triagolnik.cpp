#include<iostream>
#include<string>
#include"tiagolnik.h"

using namespace std;


Triagolnik::Triagolnik(int A,int B, int C, int H){
    a = (A<0 ? 0 : A);
    b = (B<0 ? 0 : B);
    c = (C<0 ? 0 : C);
    h = (H<0 ? 0 : H);
}


string Triagolnik::get_Name(){
    return "Triagolnik";
}

int Triagolnik::get_Area(){
    return (a*h)/2;
}


void Triagolnik::print() {
cout<<"Tip: "<<DvoDimenzionalni::get_Tip()<<endl;
cout<<"Ime: "<<get_Name()<<endl;
cout<<"Ploshtina: "<<get_Area()<<endl;
cout<<"Strana a = "<<a<<endl;
cout<<"Strana b = "<<b<<endl;
cout<<"Strana c = "<<c<<endl;
cout<<"Visina h = "<<h<<endl;

}

Triagolnik::~Triagolnik(){

}
