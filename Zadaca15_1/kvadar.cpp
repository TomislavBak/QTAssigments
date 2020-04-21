#include<iostream>
#include<string>
#include"kvadar.h"

using namespace std;

Kvadar::Kvadar(int A,int B,int C){
    a = (A<0 ? 0 : A);
    b = (B<0 ? 0 : B);
    c = (c<0 ? 0 : C);
}


string Kvadar::get_Name(){
    return "Kvadar";
}

int Kvadar::get_Area(){
    int P;
    P = 2*(a*b) + 2*(a*c) + 2*(b*c);
    return P;
}
int Kvadar::get_Volume(){
    int V;
    V = a*b*c;
    return V;
}

void Kvadar::print() {
cout<<"Tip: "<<TriDimenzionalni::get_Tip()<<endl;
cout<<"Ime: "<<get_Name()<<endl;
cout<<"Ploshtina: "<<get_Area()<<endl;
cout<<"Volumen: "<<get_Volume()<<endl;
cout<<"Strana a = "<<a<<endl;
cout<<"Strana b = "<<b<<endl;
cout<<"Strana c = "<<c<<endl;

}

Kvadar::~Kvadar(){

}
