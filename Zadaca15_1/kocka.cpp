#include<iostream>
#include<string>
#include"kocka.h"

using namespace std;


Kocka::Kocka(int A){
    a = (A<0 ? 0 : A);
}


string Kocka::get_Name(){
    return "Kocka";
}

int Kocka::get_Area(){
    return 6*(a*a);
}
int Kocka::get_Volume(){
    return a*a*a;
}


void Kocka::print() {
cout<<"Tip: "<<TriDimenzionalni::get_Tip()<<endl;
cout<<"Ime: "<<get_Name()<<endl;
cout<<"Ploshtina: "<<get_Area()<<endl;
cout<<"Volumen: "<<get_Volume()<<endl;
cout<<"Strana a = "<<a<<endl;

}

Kocka::~Kocka(){

}
