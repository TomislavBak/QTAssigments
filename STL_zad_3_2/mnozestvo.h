#ifndef MNOZESTVO_H
#define MNOZESTVO_H
#include<iostream>
#include<cstring>
using namespace std;
template <class T>
class Mnozestvo{
  public:
    Mnozestvo(T = 0);
    Mnozestvo(const Mnozestvo<char*>&);
    void print()const;

    T max_el()const;
    static int get_count();
     static int count;
    ~Mnozestvo();

    T el[100];
  T el1[100][10];

};

template <class T>
int Mnozestvo<T>::count = -1;



template <class T>
Mnozestvo<T>::Mnozestvo(T init ){

el[count] = init;
count ++;
}

template<>
Mnozestvo<char*>::Mnozestvo(char *init){


        for(int j = 0; j < 3; ++j){
    el1[count][j] = &init[j];}
count ++;
}

template<>
Mnozestvo<char*>::Mnozestvo(const Mnozestvo<char*> &init){
    count = init.count;

    for(int i = 0;i<count;i++){
       for(int j = 0;j<3;j++){
       el1[i][j]=init.el1[i][j];
    }
     count++;

}}



template <class T>
void Mnozestvo<T>::print()const{

    for(int i = 0;i<count;i++){
        cout<<el[i]<<endl;
    }
}

template <>
void Mnozestvo<char*>::print()const{

    for(int i =0;i<10;i++){
        for(int j = 0;j<count-1;j++){
   cout<<el1[i][j]<<endl;}

    }

}

template <class T>
T Mnozestvo<T>::max_el()const{
    int max = 1;

    for(int i = 0;i<count-1;i++){
        max = i;

        for(int j = i+1;j<count;j++){

            if(el[j]>el[max])
                max = j;
        }

}
    return el[max];
}

template <class T>
int Mnozestvo<T>::get_count(){
    return count;
}


template<>
char* Mnozestvo<char*>::max_el()const{
    int max = 1;

    for(int i = 0;i<count-1;i++){


        for(int j = i+1;j<count;j++){

            if(strcmp(el1[i][j],el1[i][max])>0)
                max = j;
        }


}
    return el[max];
}


template <class T>
Mnozestvo<T>::~Mnozestvo(){

}


#endif // MNOZESTVO_H
