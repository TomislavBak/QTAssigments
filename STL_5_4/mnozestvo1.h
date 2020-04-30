#ifndef MNOZESTVO1_H
#define MNOZESTVO1_H
#include<iostream>
#include<cstring>
#include<vector>
#include"krug.h"
#include"kvadrat.h"
#include"pravoagolnik.h"

using namespace std;
template <class T>
class Mnozestvo{
  public:
    Mnozestvo(int  = 1,int  = 1);
    int get_area();
    void print();
   void max_el();
    static int get_count();
     static int count;
    ~Mnozestvo();

    T k;


};


template <class T>
int Mnozestvo<T>::count = -1;


template <class T>
int Mnozestvo<T>::get_count(){
    return count;
}


// specijaliziranje na funkciite za kvadrat
template<>
Mnozestvo<Kvadrat>::Mnozestvo(int a,int b):k(a){
    count ++;


}
template <>
int Mnozestvo<Kvadrat>::get_area(){
    int p = k.area();
    return p;
}


template<>
void Mnozestvo<Kvadrat>::print(){

     cout<<"Tip: Kvadrat"<<endl;
     cout<<"Strana a:"<<k.get_side()<<endl;
     cout<<"Ploshtina: "<<k.area()<<endl;


}


// specijaliziranje na funkciite za pravoagolnik
template<>
Mnozestvo<Pravoagolnik>::Mnozestvo(int a,int b):k(a,b){

    count ++;
}
template <>
int Mnozestvo<Pravoagolnik>::get_area(){
    int p = k.area();
    return p;
}
template<>
void Mnozestvo<Pravoagolnik>::print(){

     cout<<"Tip: Kvadrat"<<endl;
     cout<<"Strana a:"<<k.get_side_a()<<endl;
     cout<<"Strana b:"<<k.get_side_b()<<endl;
     cout<<"Ploshtina: "<<k.area()<<endl;

}



// specijaliziranje na funkciite za kvadrat
template<>
Mnozestvo<Krug>::Mnozestvo(int a,int b):k(a){


    count ++;
}
template <>
int Mnozestvo<Krug>::get_area(){
    int p = k.area();
    return p;
}
template<>
void Mnozestvo<Krug>::print(){
 for(int i = 0;i<count;i++){
     cout<<"Tip: Kvadrat"<<endl;
     cout<<"Radius :"<<k.get_side()<<endl;
     cout<<"Ploshtina: "<<k.area()<<endl;
 }

}


template <class T>
Mnozestvo<T>::~Mnozestvo(){

}







#endif // MNOZESTVO1_H
