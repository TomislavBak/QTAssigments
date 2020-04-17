#include<iostream>
#include"oblik.h"
#include"dvodimenz.h"

using namespace std;

DvaD::DvaD(char *ime,int n):Oblik(ime,n){ // konstruktor

}

DvaD::DvaD(const DvaD &init):Oblik(init.ime,init.broj_strani){ //copy konstruktor


}


void DvaD::print() const{
    Oblik::print();
    cout<<"Tip:"<<tip<<endl;
}



DvaD::~DvaD(){

}



