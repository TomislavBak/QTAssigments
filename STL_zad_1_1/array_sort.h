#ifndef ARRAY_SORT_H
#define ARRAY_SORT_H
#include<iostream>
#include<iomanip>
using namespace std;

template <class T>

class Array{
public:
    Array(int = 10);
    void print_Array()const;
    bool print_Array(int , int)const;
    void print_Array();
    void sort_Array()const;
    ~Array();

private:
    int size;
    T *arrays;

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

void Array<T>::sort_Array()const{
int minm = 0;
T t;
    for(int i = 0;i<size-1;i++){
        minm = i;

        for(int j = i+1;j<size;j++){

            if(arrays[j]>arrays[minm])
                minm = j;
        }
    t = arrays[i];
    arrays[i] = arrays[minm];
    arrays[minm] = t;


    }

}

template <class T>

void Array<T>::print_Array()const{

    for(int i = 0;i<size;i++){
        cout<<arrays[i]<<" ";
    }
    cout<<endl;
}

template <class T>

bool Array<T>::print_Array(int Low,int High)const{
    if((Low<0)||(High > size)){
        return 0;
    }
    else{
        for(int i = Low;i<High;i++){
            cout<<arrays[i]<<" ";
        }
        cout<<endl;
    }
    return 1;
}
template <class T>

void Array<T>::print_Array(){

    for(int i =0;i<size;i++){
        if(i % 4 ==0){
            cout<<endl;
        }
        cout<<setw(5)<<arrays[i]<<" ";
    }
}



template <class T>

Array<T>::~Array<T>(){
    delete [] arrays;
}





#endif // ARRAY_SORT_H
