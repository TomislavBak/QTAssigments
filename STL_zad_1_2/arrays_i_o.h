#ifndef ARRAYS_I_O_H
#define ARRAYS_I_O_H
#include<iostream>
using namespace std;

template <class T>

class Array{

public:
     Array(int = 10);
    void change_Element(int,T);
    void get_Element(int)const;
    void print_Array()const;
     ~Array();
private:
    T *arrays;
    int size;

};

template <class T>

Array<T>::Array(int s){ // konstruktor

    size = (s>0)? s:0;

    arrays  = new T[size + 1];
    cout<<"Vnesi gi elementite"<<endl;
    for(int i = 0;i<size;i++){
    cout<<"Element "<<i<<endl;
    cin>>arrays[i];

    }


}

template <class T>

void Array<T>::change_Element(int i,T element){
    arrays[i] = element;
}

template <class T>

void Array<T>::get_Element(int i )const{
    return arrays[i];
}

template <class T>

void Array<T>::print_Array()const{

    for(int i = 0;i<size;i++){
        cout<<arrays[i]<<" ";
    }
    cout<<endl;
}


template <class T>

Array<T>::~Array<T>(){
    delete [] arrays;
}







#endif // ARRAYS_I_O_H
