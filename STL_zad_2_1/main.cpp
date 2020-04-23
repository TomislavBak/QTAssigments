#include <iostream>

using namespace std;


template <class T>
T func(T *type,int n_start = 0,int n_stop = 0,T sum = 10){

    for(int i = n_start;i<n_stop;i++){

        sum =sum +  type[i];
    }

    return sum;
}




int main()
{

double init [] = {1.6,2.7,3.8,1.6,2.7,3.8};

double rez;

rez = func(init,2,5,0.0);

cout<<rez<<endl;



    return 0;
}
