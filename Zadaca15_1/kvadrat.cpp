#include<iostream>
#include<string>
#include"kvadrat.h"

using namespace std;


Kvadrat::Kvadrat(int A){
    a = (A<0 ? 0 : A);
}


string Kvadrat::get_Name(){
    return "Kvadrat";
}

int Kvadrat::get_Area(){
    return a*a;
}


void Kvadrat::print() {
cout<<"Tip: "<<DvoDimenzionalni::get_Tip()<<endl;
cout<<"Ime: "<<get_Name()<<endl;
cout<<"Ploshtina: "<<get_Area()<<endl;
cout<<"Strana a = "<<a<<endl;

}

Kvadrat::~Kvadrat(){

}
