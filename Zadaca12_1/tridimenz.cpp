#include<iostream>
#include"oblik.h"
#include"tridimenz.h"

using namespace std;
TriD::TriD(char *ime,int n):Oblik(ime,n){ // konstruktor

}

TriD::TriD(const TriD &init):Oblik(init.ime,init.broj_strani){ //copy konstruktor


}


void TriD::print() const{
    Oblik::print();
    cout<<"Tip:"<<tip<<endl;
    cout<<"Visina h = "<<h<<endl;
}
void TriD::set_Hight(){
    cout<<"Vnesi visina na objektot:"<<endl;
    cin>>h;
}


TriD::~TriD(){

}
