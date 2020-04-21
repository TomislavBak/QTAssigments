#include<iostream>
#include<string>
#include"piramida.h"

using namespace std;

Piramida::Piramida(int A,int B,int h_malo,int h_golemo){
    a = (A<0 ? 0 : A);
    b = (B<0 ? 0 : B);
    h = (h_malo<0 ? 0 : h_malo);
    H = (h_golemo<0 ? 0 : h_golemo);
}


string Piramida::get_Name(){
    return "Piramida";
}

int Piramida::get_Area(){
    int P;
    P = (a*a) + 4*(a*h)/2;
    return P;
}
int Piramida::get_Volume(){
    int V;
    V = (a*a*H)/3;
    return V;
}

void Piramida::print() {
cout<<"Tip: "<<TriDimenzionalni::get_Tip()<<endl;
cout<<"Ime: "<<get_Name()<<endl;
cout<<"Ploshtina: "<<get_Area()<<endl;
cout<<"Volumen: "<<get_Volume()<<endl;
cout<<"Strana a = "<<a<<endl;
cout<<"Strana b = "<<b<<endl;
cout<<"Visina h = "<<h<<endl;
cout<<"Visina H = "<<H<<endl;

}

Piramida::~Piramida(){

}
